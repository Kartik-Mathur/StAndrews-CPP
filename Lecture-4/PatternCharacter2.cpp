// PatternCharacter2.cpp
#include <iostream>
using namespace std;

int main(){
	int n,row,j;
	cin>>n;

	for(row = 1 ; row <= n ; row++)	{

		// Increasing characters
		char ch = 'A'; // Starting point of characters
		for(j = 1; j <= row ; j++){
			cout<<ch;
			ch++;
		}

		// Print stars
		for(j = 1 ; j<=n-row ; j++){
			cout<<'*';
		}
		cout<<endl;
	}


	// cout<<endl;
	return 0;
}