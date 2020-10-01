// WavePrint
#include <iostream>
using namespace std;

int main(){
	
	int a[100][100];
	int n,m;
	cout<<"Enter n(rows) and m(cols) : ";
	cin>>n>>m;
	int x = 1;
	for(int row = 0 ; row <= n-1 ; row ++){
		for(int col = 0 ; col < m ; col++){
			a[row][col] = x;
			x++;
		}
	}	
	for(int row = 0 ; row <= n-1 ; row ++){
		for(int col = 0 ; col < m ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}
	
	// Wave Print
	for(int col = 0 ; col < m ; col++){
		// for even col, print row from 0 to n-1
		if(col%2 == 0){
			for(int row = 0 ; row<n ; row++){
				cout<<a[row][col]<<',';
			}
		}
		// for odd col, print row from n-1 to 0
		else{
			for(int row = n-1 ; row>=0 ; row--){
				cout<<a[row][col]<<',';
			}
		}

	}

	cout<<endl;
	return 0;
}