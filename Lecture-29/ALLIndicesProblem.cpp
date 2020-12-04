#include <iostream>
using namespace std;

void Solve(int *a,int n,int i,int key){
	// Base case
	if(i == n){
		return;
	}

	if(a[i] == key){
		cout<<i<<' ';
	}
	
	Solve(a,n,i+1,key);
}

int main(){
	
	// int a[]={5,1,3,2,4,5,2,5};
	// int n = sizeof(a)/sizeof(int);
	int a[10000];
	int n; cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	// cout<<endl;
	Solve(a,n,0,key);

	cout<<endl;
	return 0;
}