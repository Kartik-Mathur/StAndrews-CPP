// SpiralPrint
#include <iostream>
using namespace std;

void SpiralPrint(int a[][100],int n,int m){

	int sr = 0,er = n-1,sc =0, ec = m-1;
	
	while(sr<=er && sc<=ec){
		// 1. Print sr, sc-->ec
		for(int j=sc;j<=ec;j++){
			cout<<a[sr][j]<<' ';
		}
		sr++;

		// 2. Print ec, sr-->er
		for(int i = sr ; i<=er ; i++){
			cout<<a[i][ec]<<' ';
		}
		ec--;

		// 3. Print er, ec --> sc
		if(sr < er){
			for(int j = ec ; j>=sc ; j--){
				cout<<a[er][j]<<' ';
			}
			er--;
		}

		// 4. Print sc, er-->sr
		if(sc < ec){
			for(int i = er ; i>=sr ; i--){
				cout<<a[i][sc]<<' ';
			}
			sc++;
		}
	}

}

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
	cout<<endl;
	SpiralPrint(a,n,m);


	cout<<endl;
	return 0;
}