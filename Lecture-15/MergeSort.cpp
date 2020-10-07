// MergeSort
#include <iostream>
using namespace std;

void merge(int *arr,int s,int e,int *a,int *b){
	int mid = (s+e)/2;
	int i=s,j=mid+1,k=s;

	while(i<=mid && j<=e){
		if(b[j]<a[i]){
			arr[k++] = b[j++];
		}
		else{
			arr[k++] = a[i++];
		}
	}
	while(i<=mid){
		arr[k++]=a[i++];
	}
	while(j<=e){
		arr[k++]=b[j++];
	}
	return;
}

void MergeSort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}

	// recursive case
	// 1. Divide
	int a[100],b[100];
	int mid = (s+e)/2;
	for(int i = s; i <= mid ; i++){
		a[i] = arr[i];
	}
	for(int i = mid+1 ; i<=e ; i++){
		b[i] = arr[i];
	}
	// 2. Sort
	MergeSort(a,s,mid);
	MergeSort(b,mid+1,e);

	// 3. Merge
	merge(arr,s,e,a,b);
}

void Print(int *a,int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

int main(){
	
	int arr[]={6,5,4,76,8,9,0,3,2,1};
	int n = sizeof(arr)/sizeof(int);

	Print(arr,n);
	MergeSort(arr,0,n-1);
	Print(arr,n);


	cout<<endl;
	return 0;
}