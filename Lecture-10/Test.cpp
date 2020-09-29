#include <iostream>
using namespace std;

void Update(int *x,int n){
	for(int i = 0 ; i < n ; i++){
		// cout<<*(x+i)<<' ';
		*(x+i) = *(x+i) + 100;
	}	
}

void Print(int *x, int n){
	for(int i = 0 ; i < n ; i++){
		// cout<<*(x+i)<<' '; //*(x+i) == x[i]
		cout<<x[i]<<' ';
	}
}

int main(){
	
	int arr[]={1,2,3,4,5};
	int n = 5;

	// int *x = arr; // or int*x = &arr[0];
	Update(arr,n);

	Print(arr,n);


	cout<<endl;
	return 0;
}