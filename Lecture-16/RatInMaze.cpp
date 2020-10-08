// RatInMaze
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][10],int i,int j,int n,int m, int sol[][10]){
	// Base case
	if( i == n-1 and j == m-1){
		sol[i][j] = 1;
		// Print the solution matrix
		for(int k = 0; k <n; k++){
			for(int l = 0; l < m ; l++){
				cout<<sol[k][l]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	// Currently on whatever cell I am standing on that could be a part of the solution
	sol[i][j] = 1; // Assume current i,j is part of the solution

	// Check Right
	if(j+1<m and maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla = RatInMaze(maze,i,j+1,n,m,sol);
		if(KyaRightSeRaastaMilla == true){
			return true;
		}
	}
	// Check down
	if(i+1<n and maze[i+1][j]!='X'){
		bool KyaNeecheSeRaastaMilla = RatInMaze(maze,i+1,j,n,m,sol);
		if(KyaNeecheSeRaastaMilla == true){
			return true;
		}
	}

	// if both sides arent possible that means current cell cannot be a part of sol.
	sol[i][j] = 0; // Because there is no path from i,j
	return false;
}

int main(){
	char maze[][10]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[10][10]={0};
	RatInMaze(maze,0,0,4,4,sol);

	return 0;
}