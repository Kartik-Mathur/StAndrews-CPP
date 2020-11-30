#include <iostream>
using namespace std;

bool  ismirrorinverse(int *a, int n){
	for(int i=0;i<n;i++){
		int val = a[i];
		if(a[val]!=i){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int a[10001];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	if(ismirrorinverse(a,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

	return 0;
}
// bool isMirrorInverse(int *a,int n){
// 	for(int i = 0 ; i < n ; i++){
// 		int ikiValue = a[i];
// 		if(a[ikiValue] != i){
// 			return false;
// 		}
// 	}

// 	return true;
// }

// int main(){
	
// 	int n;
// 	cin>>n;

// 	int a[100001];
// 	for(int i = 0 ; i < n ; i++){
// 		cin>>a[i];
// 	}
// 	if(isMirrorInverse(a,n)){
// 		cout<<"true";
// 	}
// 	else{
// 		cout<<"false";
// 	}
// 	cout<<endl;

// 	return 0;
// }