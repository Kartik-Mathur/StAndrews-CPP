#include <iostream>
using namespace std;

int main(){
	// Because in 2d array we need to provide many inputs, lets automate it
	int a[100][100];
	int n,m;
	cout<<"Enter n(rows) and m(cols) : ";
	cin>>n>>m;
	int x = n*m;
	for(int row = 0 ; row <= n-1 ; row ++){
		for(int col = 0 ; col < m ; col++){
			a[row][col] = x;
			x--;
		}
	}
	// Take input of 2D - Array from the user
	// int a[3][4];
	// int n=3,m=4;
	// for(int row = 0 ; row <= n-1 ; row ++){
	// 	for(int col = 0 ; col < m ; col++){
	// 		cin>>a[row][col];
	// 	}
	// }	

	// Only while initialization giving the value of row is optional
	// int a[3][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12}
	// };
	// int n = 3;
	// int m = 4;
	int key;
	cout<<"Enter key to search : ";
	cin>>key;

	for(int row = 0 ; row <= n-1 ; row ++){
		for(int col = 0 ; col < m ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}
	int col,row;
	for(row = 0 ; row <= n-1 ; row ++){
		for(col = 0 ; col < m ; col++){
			if(key == a[row][col]){
				cout<<"Key Found at : "<<row<<","<<col<<endl;
				break;
			}
		}
		if(col != m){
			break;
		}
	}
	return 0;
}

















