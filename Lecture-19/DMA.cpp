#include <iostream>
using namespace std;

int* CreateArray(int n){
	int *arr = new int[n];
	for(int i = 0 ; i < n ; i++){
		arr[i] = i+1;
	}
	return arr;
}

void PrintArray(int *arr,int n){
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}

int main(){


	int n;
	cin>>n;

	int *a = CreateArray(n);
	PrintArray(a,n);
	delete []a;


	// int row,col;
	// cin>>row>>col;

	// int **arr = new int*[row];
	// for(int i = 0 ; i < row ; i++){
	// 	arr[i] = new int[col];
	// }


	// int number = 1;
	// for(int i = 0 ; i < row ; i++){
	// 	for(int j = 0 ; j < col ; j++){
	// 		arr[i][j] = number++;
	// 	}
	// }
	// for(int i = 0 ; i < row ; i++){
	// 	for(int j = 0 ; j < col ; j++){
	// 		cout<<arr[i][j]<<' ';
	// 	}
	// 	cout<<endl;
	// }	

	//delete the 2d array
	// for(int i = 0 ; i < row ; i++){
	// 	delete []arr[i];
	// }
	// delete []arr;
	// arr = NULL;


	// int n;
	// cin>>n;
	// // int *a = new int[n];// Run time memory allocation
	// int a[n];
	// for(int i = 0 ; i < n ; i++){
	// 	a[i]=i+1;
	// }
	// for(int i = 0 ; i < n ; i++){
	// 	cout<<a[i]<<' ';
	// }
	cout<<endl;
	
	// int *a = new int;
	// *a = 10;
	// cout<<*a<<endl;

	// float *f = new float;
	// *f = 10.11;
	// cout<<*f<<endl;

	// delete a;
	// a = NULL;
	// delete f;
	// f= NULL;

	// cout<<*a<<endl;

	return 0;
}