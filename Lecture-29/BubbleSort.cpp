#include <iostream>
using namespace std;

void Bsort(int *a,int n,int i){
	if(i == n-1){
		return;
	}

	for(int j = 0 ; j <= n-2 ; j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	Bsort(a,n,i+1);
}


int main(){
	
	// int a[]={5,1,3,2,4};
	// int n = sizeof(a)/sizeof(int);
	int a[10000];
	int n; cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	// cout<<endl;

	Bsort(a,n,0);

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	return 0;
}