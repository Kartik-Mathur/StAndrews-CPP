#include <iostream>
using namespace std;

int main(){
	
	int arr[10];

	arr[1] = 10;
	arr[4] = 100;
	arr[7] = 1000;

	cout<<arr[1]<<' '<<arr[4]<<' '<<arr[9]<<endl;

	// int a[5]={1,2,3,4,5}; // Initialization of array - way 1
	// int a[]={1,2,3,4,5,6}; // Initialization of array - way 2
	int a[100] = {0}; // Initialization of array - way 3
	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;
	// cout<<a[3]<<endl;
	// cout<<a[4]<<endl;
	// cout<<a[5]<<endl;

	// alternative way to write above statements
	for(int i = 0;i<100;i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;
	return 0;
}