// MergeSort
#include <iostream>
using namespace std;

void merge(int *a,int *b,int *c,int s,int e){
	int mid = (s+e)/2;
	int i = mid+1; // iterator of c[]
	int j = s; // interator of b[]
	int k = s; // iterator of a[]

	while(i<=e && j<=mid){
		if(c[i]<b[j]){
			a[k++]=c[i++];
		}
		else{
			a[k++]=b[j++];
		}
	}

	while(i<=e){
		a[k++] = c[i++];
	}
	while(j<=mid){
		a[k++] = b[j++];
	}
}

void MergeSort(int *a,int s,int e){
	// Base case
	if(s>=e){
		return;
	}

	// 1. Divide
	int mid = (s+e)/2;
	int *b=new int[mid+1],*c=new int[e+1];
	
	for(int i = s ; i <= mid ; i++){
		b[i] = a[i];
	}
	for(int i = mid+1; i <= e ; i++){
		c[i] = a[i];
	}

	// 2. Sort
	MergeSort(b,s,mid);
	MergeSort(c,mid+1,e);

	// 3. Merge
	merge(a,b,c,s,e);
	delete[] b;delete[] c;
}

int main(){
	int *a;
	int n; cin>>n;
	a = new int[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	MergeSort(a,0,n-1);

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}	

	delete []a;
	cout<<endl;
	return 0;
}