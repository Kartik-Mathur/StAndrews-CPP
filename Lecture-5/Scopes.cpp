#include <iostream>
using namespace std;

float pi = 3.14; // Global Scope

int main(){

	cout<<pi<<endl; // --> ? 3.14
	float pi = 3.142;
	cout<<pi<<endl; // --> ? 3.142

	int i = 1;
	
	int a = 10,b=20;

	if(i<10){
		// int c = 500;
		// cout<<"C : "<<c<<endl;
		int a = 100;
		cout<<a<<endl; // 
	}
	else{
		cout<<b<<endl;
	}

	// cout<<c<<endl;
	cout<<a<<endl; //

	cout<<endl;
	return 0;
}