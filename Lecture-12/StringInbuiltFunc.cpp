// StringInbuiltFunc
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[100]="Coding";
	char b[100]="Harry";
	char c[50];

	cout<<strlen(a)<<endl;
	cout<<strlen(b)<<endl;

	strcpy(c,b); // copy string b into string c
	cout<<c<<endl;
	strcpy(c,a);
	cout<<c<<endl;

	// Concatenate two strings together
	strcat(a,b); // a = a + b;
	cout<<a<<endl;
	return 0;
}