// TypeConversion
#include <iostream>
using namespace std;

int main(){
	
	// cout<<10+10<<endl;
	// cout<<10.11+10<<endl;  // float + int --> float
	// cout<<'A' + 'A'<<endl;  // Operator
	// cout<<'A' - 'A'<<endl;  // Operator
	// cout<<'A' + 0 <<endl;  // char + int --> int

	int a = (int)'A'; 
	cout<<a<<endl; 

	char ch = 'A';
	a = ch;
	// cout<<ch<<endl;
	// cout<<a<<endl; // ?


	ch = 98;
	cout<<ch; // ?




	cout<<endl;
	return 0;
}