#include <iostream>
using namespace std;

int Solve(int *a,int n,int key){
	if(n == 0){
		return -1;
	}

	if(a[n-1] == key){
		return n-1;
	}

	return Solve(a,n-1,key);
}

int main(){
	int a[10000];
	int n; cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	int key;
	cin>>key;	

	cout<<Solve(a,n,key);

	cout<<endl;
	return 0;
}