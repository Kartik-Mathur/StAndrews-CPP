// NQueen
#include <iostream>
using namespace std;

bool CanWePlaceQueen(int a[][100],int i,int j,int n){
	// Check for the column and row
	for(int k = 0 ; k < n ; k++){
		if(a[k][j] || a[i][k]){
			return false;
		}
	}
	// Check for the row
	// for(int k = 0 ; k < n ; k++){
	// 	if(a[i][k]){
	// 		return false;
	// 	}
	// }
	// Check the upper right diagnol
	int r = i,c = j;
	while(r>=0 && c<n){
		if(a[r][c]){
			return false;
		}
		r--;
		c++;
	}
	// Check the upper left diagnol
	while(i>=0 and j>=0){
		if(a[i][j]){
			return false;
		}
		i--; j--;
	}
	return true;
}

bool NQueen(int a[][100],int i,int n){
	// base case
	if(i == n){
		// Print the answer
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				if(a[i][j] == 1){
					cout<<"Q ";
				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}
	// Recursive case
	for(int j = 0 ; j < n ; j++){
		if(CanWePlaceQueen(a,i,j,n)){
			a[i][j] = 1; // Place the queen
			bool KyaBaakiPlaceHui = NQueen(a,i+1,n);
			if(KyaBaakiPlaceHui){
				return true;
			}
			a[i][j] = 0;
		}
	}
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int n,a[100][100];
	cin>>n;

	NQueen(a,0,n);


	return 0;
}