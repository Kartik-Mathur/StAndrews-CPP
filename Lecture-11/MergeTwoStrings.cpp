// MergeTwoStrings
#include <iostream>
using namespace std;

int length(char *a){
	int count = 0; 
	for(int i = 0 ; a[i] != '\0' ; i++){
		count++;
	}

	return count;
}

void merge(char *a,char *b){

	int i = length(a);
	int j = 0;

	while(b[j]!='\0'){
		a[i] = b[j];
		i++; j++;
	}
	a[i] = '\0';
}

int main(){
	
	char a[]="Coding";
	char b[]=", Learning String";

	merge(a,b);
	cout<<a;

	cout<<endl;
	return 0;
}













