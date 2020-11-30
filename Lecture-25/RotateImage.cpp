#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int a[1001][1001];
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin>>a[i][j];
		}
	}

	// Rotate Function
	// 1st Step 
	for(int i = 0;  i<n ; i++){
		int j = 0,k = n-1;
		while(j<k){
			swap(a[i][j],a[i][k]);
			j++;k--;
		}
	}
	// 2nd Step swapping of elements
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i>j){
				swap(a[i][j],a[j][i]);
			}
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	// cout<<endl;


	return 0;
}






