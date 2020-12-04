// FirstIndex
#include <iostream>
using namespace std;

int Solve(int *a,int n,int i,int key){
	if(i == n){
		return -1;
	}

	if(a[i] == key){
		return i;
	}

	return Solve(a,n,i+1,key);
}

int main(){
	int a[10000];
	int n; cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	int key;
	cin>>key;	

	cout<<Solve(a,n,0,key);

	cout<<endl;
	return 0;
}