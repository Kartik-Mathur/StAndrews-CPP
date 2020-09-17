// PrintOddNumbers
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n; // Read N

	int i; // or int i = 1;--> initialization
	i = 1; // Assignment 

	while(i<=n){
		cout<<i<<' ';

		i = i + 2; // Updation
	}
	cout<<endl;

	// int i = 1; -->Redefinition is not allowed
	i = 1; // Updation of the bucket i is allowed
	while(i<=n){
		if(i%2!=0){
			cout<<i<<' ';
		}

		i = i + 1;
	}
	cout<<endl;

	// Print all Odd Numbers in descending order from n->1
	i = n;
	while(i>=1){
		if(i%2!=0){
			cout<<i<<' ';
		}

		i = i -1;
	}


	cout<<endl;
	return 0;
}