// Pallindrome
#include <iostream>
using namespace std;

int length(char *a){
	int count = 0; 
	for(int i = 0 ; a[i] != '\0' ; i++){
		count++;
	}

	return count;
}

bool isPallindrome(char *a){

	int len = length(a);
	int i = 0, j = len - 1;
	while(i<j){
		if(a[i] != a[j]){
			return false;
		}
		i++; j--;
	}
	return true;
}

int main(){
	
	char a[100];
	cin.getline(a,100);

	if(isPallindrome(a) == true){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Pallindrome"<<endl;
	}


	cout<<endl;
	return 0;
}