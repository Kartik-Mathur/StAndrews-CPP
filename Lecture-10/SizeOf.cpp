// SizeOf
#include <iostream>
using namespace std;
void Print(int *x, int n){
	for(int i = 0 ; i < n ; i++){
		cout<<x[i]<<' ';
	}
	cout<<endl;
}

int main(){
	int arr[] = {1,2,3,4};
	int n = sizeof(arr)/sizeof(int);

	Print(arr+2,n-2);

	// int a = 10;
	// char ch = 'A';
	// int *x = arr;

	// cout<<(x+3)-(x)<<endl;
	// cout<<sizeof(a)<<endl; // 4
	// cout<<sizeof(100)<<endl; // 4
	// cout<<sizeof(int)<<endl; //4
	// cout<<sizeof(ch)<<endl; // 1
	// cout<<sizeof(float)<<endl; // 4
	// cout<<sizeof(double)<<endl; // 8


	return 0;
}