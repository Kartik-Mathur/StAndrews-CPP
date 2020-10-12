#include <iostream>
using namespace std;
#define ll long long

int GridWays(int i,int j){
	// base case
	if( i == 0 and j == 0){
		return 1;
	}
	if(i<0 or j<0){
		return 0;
	}

	// recursive case
	return GridWays(i-1,j) + GridWays(i,j-1);
}

int main(){
	
	ll int n,m;
	cin>>n>>m;

	cout<<GridWays(n,m);


	cout<<endl;
	return 0;
}