// Check7
#include <iostream>
using namespace std;

bool fun(int *arr,int n){
	// Base case
	if(n == 0){
		return false;
	}

	// Recursive case
	if(arr[0] == 7){
		return true;
	}

	bool KyaChoteArrayMeiMilla = fun(arr+1,n-1);
	if(KyaChoteArrayMeiMilla){
		return true;
	}
	else{
		return false;
	}
}

int first7(int *arr,int n,int i){
	// Base case
	if(i == n){
		return -1;
	}

	// Recursive case
	if(arr[i] == 7){
		return i;
	}

	// int indx = first7(arr,n,i+1);
	// return indx;
	return first7(arr,n,i+1);
}

int last7(int *arr, int i){
	if( i == 0){
		return -1;
	}

	if(arr[i] == 7){
		return i;
	}
	return last7(arr,i-1);
}

void Print7(int *arr,int i,int n){
	if( i == n ){
		return;
	}

	if(arr[i] == 7){
		cout<<i<<' ';
	}
	Print7(arr,i+1,n);
}
int main(){
	
	int arr[] = {0,12,7,5,4,6,8,5,3,2,6,7,7,7,7};
	int n = sizeof(arr)/sizeof(int);

	// if(fun(arr,n)){
	// 	cout<<"Yes"<<endl;
	// }
	// else{
	// 	cout<<"No"<<endl;
	// }

	cout<<last7(arr,n)<<endl;
	Print7(arr,0,n);
	cout<<endl;
	return 0;
}