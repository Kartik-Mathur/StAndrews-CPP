// PrintPrimes
#include <iostream>
using namespace std;

bool isPrime(int n){
	for(int i = 2 ; i < n ; i++){
		if(n%i == 0){
			// Not a prime number
			return false;
		}

	}
	// Means a prime number
	return true;
}

void PrintPrimes(int n){

	for(int i = 2 ; i<=n ; i++){
		if(isPrime(i)){
			// when if ki condition is true, agar nahi hai true toh nahi chalega
			cout<<i<<' ';
		}
	}
	return;
}

int main(){
	
	int a;
	cin>>a;
	PrintPrimes(a);
	// if(isPrime(a)){
	// 	cout<<"Prime";
	// }
	// else{
	// 	cout<<"Not Prime";
	// }


	cout<<endl;
	return 0;
}