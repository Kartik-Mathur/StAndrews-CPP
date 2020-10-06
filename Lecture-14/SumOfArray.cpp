#include <iostream>
using namespace std;

int Sum(int *arr,int n){
	// base case
	if(n == 0){
		return 0;
	}

	// Recurrence relation
	int ChotaSum = Sum(arr+1,n-1);

	return ChotaSum + arr[0];
}

int fun1(int *arr,int n){
	// base case
	if(n == 0){
		return 0;
	}

	// recurrence relation
	int ChotaSum = fun1(arr,n-1);
	return ChotaSum+arr[n-1];
}

int fun2(int *arr,int n,int i){
	if(i == n){
		return 0;
	}

	int ChotaSum = fun2(arr,n,i+1);
	return ChotaSum + arr[i];
}

int main(){
	
	int arr[] = {1,2,3,4,5,10};
	int n = sizeof(arr)/sizeof(int);

	cout<<Sum(arr,n)<<endl;
	cout<<fun1(arr,n)<<endl;
	cout<<fun2(arr,n,0)<<endl;
	
	return 0;
}