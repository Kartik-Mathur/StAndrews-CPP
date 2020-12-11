// RatChasesCheeze
#include <iostream>
using namespace std;
bool sol[100][100] = {0};

bool RatInMaze(char maze[][10],int i,int j,int n,int m){
	// base case
	if(i == n-1 and j == m-1){
		sol[i][j] = true;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				if(sol[i][j]){
					cout<<"1 ";
				}
				else{
					cout<<"0 ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}


	sol[i][j] = true;
	// Recursive case
	// 1. Check Right se raasta milla
	if(j+1<m and sol[i][j+1]!=true and maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla = RatInMaze(maze,i,j+1,n,m);
		if(KyaRightSeRaastaMilla){
			return true;
		}
	}

	// 2. Check down se raasta milla
	if(i+1<n and !sol[i+1][j] and maze[i+1][j]!='X'){
		bool KyaNeecheMilla = RatInMaze(maze,i+1,j,n,m);
		if(KyaNeecheMilla){
			return true;
		}
	}

	// 3. check left se raasta milla
	if(j-1>=0 and !sol[i][j-1] and maze[i][j-1]!='X'){
		bool KyaLeftMilla = RatInMaze(maze,i,j-1,n,m);
		if(KyaLeftMilla){
			return true;
		}
	}

	// 4. Check upar se raasta milla
	if(i-1>=0 and !sol[i-1][j] and maze[i-1][j]!='X'){
		bool KyaUparMilla = RatInMaze(maze,i-1,j,n,m);
		if(KyaUparMilla){
			return true;
		}
	}

	sol[i][j] = false;
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char maze[][10]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	RatInMaze(maze,0,0,4,4);

	return 0;
}





















