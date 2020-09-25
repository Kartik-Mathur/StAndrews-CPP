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


int main(){
	
	int a;
	cin>>a;

	bool ans = isPrime(a);
	// ans will be either true or false
	// if ans is true that means number is prime, else its not prime
	// any non-zero value is considered as true, 0: is considered as false
	// cout<<ans<<endl;
	if(ans){ // if(true){// Do this task}
		cout<<"Prime";
	}
	else{
		cout<<"Not Prime";
	}






















	// 0 : false
	// if(false/0){
	// 	cout<<"Hello";
	// }
	// else{
	// 	cout<<"World";
	// }
	// Any nonzero value is true
	// if(-10){
	// 	cout<<"Hello";
	// }
	// else{
	// 	cout<<"World";
	// }



	cout<<endl;
	return 0;
}