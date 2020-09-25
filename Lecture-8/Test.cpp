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

	if(ans){
		cout<<"Prime";
	}
	else{
		cout<<"Not Prime";
	}

	cout<<endl;
	return 0;
}