// PassingArraysIntoFunc
#include <iostream>
using namespace std;

// void PrintArray(int a[10],int n){ a[10] or a[] we can use any of these
void PrintArray(int a[],int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}	
	cout<<endl;
}

void SelectionSort(int a[],int n){
	// Selection sort algo
	for(int i = 0 ; i<n-1 ; i++){
		int mi = i;
		for(int j = i+1 ; j<n ; j++){
			if(a[j]<a[mi]){
				mi = j;
			}
		}
		if(mi != i){
			swap(a[mi],a[i]);
		}
	}	
}

int main(){
	
	int a[10]={5,2,3,4,1,6,0};
	int n = 7;


	PrintArray(a,n); // array is passed while calling by its name only
	SelectionSort(a,n);
	PrintArray(a,n);


	// cout<<endl;
	return 0;
}