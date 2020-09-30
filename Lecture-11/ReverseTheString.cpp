// ReverseTheString
#include <iostream>
using namespace std;

int length(char *a){
	int count = 0; 
	for(int i = 0 ; a[i] != '\0' ; i++){
		count++;
	}

	return count;
}

void reverse(char *a){

	int len = length(a);
	int i = 0, j = len - 1;
	while(i<j){
		swap(a[i],a[j]);
		i++; j--;
	}
}

int main(){
	
	char a[100];
	cin.getline(a,100);
	reverse(a);
	cout<<a<<endl;


	cout<<endl;
	return 0;
}