#include <iostream>
using namespace std;

bool isSorted(int *arr,int n){
	// base case
	if(n == 1 || n == 0){
		return true;
	}

	// Recurrence relation
	bool KyaChotaSortedHai = isSorted(arr+1,n-1);

	if(KyaChotaSortedHai == true && arr[0]<arr[1]){
		return true; // Bada array is also sorted in this case
	}
	else{
		return false; // Bada array sorted nahi hoga is case mei
	}
}


int main(){
	
	int arr[] = {-1,0,1,3,5,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);

	if(isSorted(arr,n)){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"Array is not sorted"<<endl;
	}

	cout<<endl;
	return 0;
}