// RotateString
#include <iostream>
using namespace std;
int length(char *a){
	int count = 0; 
	for(int i = 0 ; a[i] != '\0' ; i++){
		count++;
	}

	return count;
}

int main(){
	
	char a[100];
	cin.getline(a,100);
	int len = length(a);
	int n;
	cin>>n;
	// 1. Shift all the characters n positions ahead starting from the last index
	int i = len - 1;
	while(i>=0){
		a[i+n] = a[i];
		i--;
	}
	cout<<a<<endl;
	// 2. Bring the last n characters in front
	i = 0;
	int j = len;

	for(int k = 1 ; k<=n ; k++){
		a[i] = a[j];
		i++; j++;
	}
	cout<<a<<endl;
	 
	// Insert the NULL at the len position
	a[len] = '\0';
	cout<<a;

	cout<<endl;
	return 0;
}