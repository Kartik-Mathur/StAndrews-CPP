// SelectionSort
#include <iostream>
using namespace std;

int main(){
	
	int a[]={5,3,1,2,4,-1,-2,-4,0,7};
	int n = 10;
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

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

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}