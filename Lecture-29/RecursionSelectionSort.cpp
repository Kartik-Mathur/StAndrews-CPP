#include <iostream>
using namespace std;

void Ssort(int *a,int n,int i){
	// Base case
	if(i == n-1){
		return;
	}

	// Recursive case
	int mi = i;
	for(int j = i+1 ; j<n ; j++){
		if(a[j]<a[mi]){
			mi = j;
		}
	}

	swap(a[mi],a[i]);

	Ssort(a,n,i+1);
}


int main(){
	
	int a[]={5,1,3,2,4};
	int n = sizeof(a)/sizeof(int);

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	Ssort(a,n,0);

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	cout<<endl;
	return 0;
}