// RatInMaze
#include <iostream>
using namespace std;

int sol[100][100]={0};

bool Solve(char maze[][5],int i,int j,int n,int m){
	// base case
	if(i == n-1 && j == m-1){
		sol[i][j] = 1;
		// We have reached the destination
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				if(maze[i][j] == 'X'){
					cout<<"X ";
				}
				else if(sol[i][j] == 0){
					cout<<"- ";
				}
				else{
					cout<<sol[i][j]<<' ';
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	// I would assume that current i,j could be the part of solution
	sol[i][j] = 1;
	// 1. First check right
	if(j+1<m && maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla = Solve(maze,i,j+1,n,m);
		if(KyaRightSeRaastaMilla){
			return true;
		}
	}
	// 2. Check Downwards
	if(i+1<n && maze[i+1][j]!='X'){
		bool KyaNeecheSeMilla = Solve(maze,i+1,j,n,m);
		if(KyaNeecheSeMilla){
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	char maze[][5]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	Solve(maze,0,0,4,4);

	return 0;
}