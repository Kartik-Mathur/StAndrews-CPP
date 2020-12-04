// Factorial
#include <iostream>
using namespace std;

int Fact(int n){
	// Base
	if(n == 0){
		return 1;
	}

	// Recursive
	int ChotaAns = Fact(n-1); // Assumption

	int BadaAns = n*ChotaAns;
	return BadaAns;
}

int main(){
	
	int n;
	cin>>n;

	cout<<Fact(n);


	cout<<endl;
	return 0;
}