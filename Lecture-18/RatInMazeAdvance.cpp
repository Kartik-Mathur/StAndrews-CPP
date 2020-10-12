// RatInMazeAdvance
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][10],bool visited[][10],int sol[][10],int n,int m,int i,int j){
	// base case
	if( i == n-1 and j == m-1){
		sol[i][j] = 1;
		// Print the solution
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cout<<sol[i][j]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		sol[i][j] = 0;
		return false;
	}

	// recursive case
	sol[i][j] = 1;
	visited[i][j] = true;

	// Check Right
	if(j+1<m and !visited[i][j+1] and maze[i][j+1]!='X'){
		bool KyaRightSeMilla = RatInMaze(maze,visited,sol,n,m,i,j+1);
		if(KyaRightSeMilla){
			return true;
		}
	}

	// Check down
	if(i+1<n and !visited[i+1][j] and maze[i+1][j]!='X'){
		bool KyaNeecheRaastaMilla = RatInMaze(maze,visited,sol,n,m,i+1,j);
		if(KyaNeecheRaastaMilla){
			return true;
		}
	}

	// check left
	if(j-1>=0 and !visited[i][j-1] and maze[i][j-1]!='X'){
		bool KyaLeftSeRaastaMilla = RatInMaze(maze,visited,sol,n,m,i,j-1);
		if(KyaLeftSeRaastaMilla){
			return true;
		}
	}

	// check top
	if(i-1>=0 and !visited[i-1][j] and maze[i-1][j]!='X'){
		bool KyaTopSeRaastaMilla = RatInMaze(maze,visited,sol,n,m,i-1,j);
		if(KyaTopSeRaastaMilla){
			return true;
		}
	}

	sol[i][j] = 0;
	visited[i][j] = false;
	return false;
}

int main(){

	char maze[][10]={
		"00000",
		"0XXX0",
		"000X0",
		"0X0X0",
		"000X0"
	};
	bool visited[10][10]={0};
	int sol[10][10]={0};

	RatInMaze(maze,visited,sol,5,5,4,2);
	

	return 0;
}