// Fibonacci
#include <iostream>
using namespace std;

int fibo(int n){
	// Base case
	if(n==0 || n==1){
		return n;
	}
	return fibo(n-1) + fibo(n-2);
	// // Smaller problem --> Pure assumption that recursion will solve this
	// int ChotiProblem1 = fibo(n-1);
	// int ChotiProblem2 = fibo(n-2);

	// // Asnwer to bigger problem
	// int BadaAns = ChotiProblem1 + ChotiProblem2;
	// return BadaAns;
}

int main(){
	
	int n;
	cin>>n;

	cout<<fibo(n);

	cout<<endl;
	return 0;
}