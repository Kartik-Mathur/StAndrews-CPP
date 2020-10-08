// Nqueen
#include <iostream>
using namespace std;

bool KyaSafeHai(int board[][10],int i,int j,int n){
	// Pehle check row and column
	for(int k = 0;k<n;k++){
		if(board[k][j]==1 || board[i][k] == 1){
			return false;
		}
	}

	int l=i,k=j;
	// Check the right diagnol
	while(l>=0 and k<n){
		if(board[l][k] == 1){
			return false;
		}
		l--;k++;
	}
	// Check the left diagnol
	while(i>=0 and j>=0){
		if(board[i][j] == 1){
			return false;
		}
		i--;j--;
	}
	return true;
}

bool Nqueen(int board[][10],int i,int n){
	// Base case
	if( i == n){
		// Print the solution
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < n ; k++){
				// cout<<board[j][k]<<' ';
				if(board[j][k]){
					cout<<"Q";
				}
				else{
					cout<<"_";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	for(int j = 0 ; j < n ; j++){
		// Try to keep queen on every i-->j
		if(KyaSafeHai(board,i,j,n)){
			board[i][j] = 1; // Place the queen if its safe to put the queen
			bool KyaBaakiBaatBani = Nqueen(board,i+1,n);
			if(KyaBaakiBaatBani == true){
				return true;
			}
			board[i][j] = 0;
		}
	}

	return false;
}

int main(){
	
	int board[10][10]={0};
	int n;
	cin>>n;
	Nqueen(board,0,n);


	cout<<endl;
	return 0;
}