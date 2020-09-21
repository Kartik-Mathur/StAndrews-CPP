// PatternCharacter
#include <iostream>
using namespace std;

int main(){
	int row,n,j;
	cin>>n;

	for(row = 1 ; row<=n ;row++){
		// increasing characters
		char ch = 'A';
		for(j = 0 ; j<n-row+1;j++){
			cout<<(char)(ch+j);
		}
		
		j = j - 1;
		// decreasing characters
		for(; j>=0 ; j--){
			cout<<(char)(ch+j);
		}
		cout<<endl;
	}

	cout<<endl;
	return 0;
}