// BubbleSort
#include <iostream>
using namespace std;

void BubbleSort(int *a,int n){
	for(int i = 0 ; i < n-1 ; i++){ // n-1 times
		// n-1 times we need to do some work
		for(int j = 0 ; j <= n-2-i ; j++){ // *(x+i) == x[i]
			if(*(a+j)>*(a+j+1)){
				// a[j] = a[j] + a[j+1];
				*(a+j) = *(a+j) + *(a+j+1);
				// a[j+1] = a[j] - a[j+1];
				*(a+j+1) = *(a+j) - *(a+j+1);
				// a[j]=a[j]-a[j+1];
				*(a+j) = *(a+j) - *(a+j+1);
			}
		}

	}	
}

void Print(int *x, int n){
	for(int i = 0 ; i < n ; i++){
		// cout<<*(x+i)<<' '; //*(x+i) == x[i]
		cout<<x[i]<<' ';
	}
}

int main(){
	
	int arr[]={5,4,3,2,1,10,11,0,-1,-2,-3,-4};
	int n = sizeof(arr)/sizeof(int);

	BubbleSort(arr,n);
	Print(arr,n);

	cout<<endl;
	return 0;
}