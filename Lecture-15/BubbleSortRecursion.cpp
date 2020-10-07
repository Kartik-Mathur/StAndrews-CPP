// BubbleSortRecursion
#include <iostream>
using namespace std;

void bubbleSort(int *a,int n,int i){
	// Base case
	if(i == n-1){
		return;
	}

	// Recursive case
	for(int j = 0 ; j <= n-2-i ; j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	
	bubbleSort(a,n,i+1);
}

void Print(int *a,int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

int main(){
	
	int a[]={5,4,3,2,1,46,5,7,8,9,1,-1};
	int n = sizeof(a)/sizeof(int);

	Print(a,n);
	bubbleSort(a,n,0);
	Print(a,n);


	return 0;
}