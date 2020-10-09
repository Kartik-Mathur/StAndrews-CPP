#include <iostream>
#include <cmath>
using namespace std;

bool KyaSafeHai(int mat[][9],int i,int j,int n,int number){
	// Check whether the number is present in row and column
	for(int k = 0 ; k<n ; k++){
		if(mat[i][k] == number || mat[k][j] == number){
			return false;
		}
	}

	// Check whether the number is present in block
	n = sqrt(n); // n is 9 and it is converted to sqrt(9)==3
	int starti = (i/n)*n;
	int startj = (j/n)*n;
	for(int k = starti ; k<starti+n ; k++){
		for(int l = startj ; l<startj+n ; l++){
			if(mat[k][l] == number){
				return false;
			}
		}
	}

	// if number is not present anywhere
	return true;
}


bool Sudoku(int mat[][9],int i,int j,int n){
	// Base case
	if(i == n){
		// Sudoku is solved simply print it
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cout<<mat[i][j]<<' ';
			}
			cout<<endl;
		}
		return true;
	}

	// Recursive case
	if(j == n){
		return Sudoku(mat,i+1,0,n);
	}

	if(mat[i][j] != 0){
		return Sudoku(mat,i,j+1,n);
	}
	// Work for single cell-->Empty Cell
	for(int number=1;number<=n;number++){
		if(KyaSafeHai(mat,i,j,n,number)){
			mat[i][j] = number;
			bool KyaBaakiSolveHua = Sudoku(mat,i,j+1,n);
			if(KyaBaakiSolveHua){
				return true;
			}
			mat[i][j] = 0;
		}
	}
	return false;
}

int main(){
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};
		
	Sudoku(mat,0,0,9);

	cout<<endl;
	return 0;
}