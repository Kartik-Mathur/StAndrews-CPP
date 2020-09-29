// Pointers
#include <iostream>
using namespace std;

int main(){

	// int *x; // x contains garabage value
	// cout<<*x<<endl;

	int *x = NULL; // null is equals to 0
	cout<<*x<<endl;
	
	float f = 10.11;
	int a = 10;
	char ch = 'A';
	char *chptr;
	chptr = &ch;

	float *fptr = &f;
	int *aptr = &a;

	cout<<&f<<endl;	
	cout<<fptr<<endl;

	cout<<&a<<endl;
	cout<<aptr<<endl;

	cout<<(float*)&ch<<endl;
	cout<<(void*)chptr<<endl;

	// cout<<endl;
	return 0;
}