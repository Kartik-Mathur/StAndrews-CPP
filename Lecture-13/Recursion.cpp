// Recursion
#include <iostream>
using namespace std;

// int fact(int n){
// 	if(n == 1){
// 		return 1;
// 	}

// 	// fact(n) = n*fact(n-1);
// 	int ChotaAns = fact(n-1); // Pure assumption --> that this will give me correct ans
// 	// ChotaAns is getting the answer for the smaller problem via recursion

// 	int BadaAns = n*ChotaAns; // This is doing work for bigger problem
// 	return BadaAns;
// }

int fact(int n){
	if(n == 0){
		return 1;
	}

	return n*fact(n-1);
}

int main(){
	
	int n;
	cin>>n;

	cout<<fact(n);

	cout<<endl;
	return 0;
}