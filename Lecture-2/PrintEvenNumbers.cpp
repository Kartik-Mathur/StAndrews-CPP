#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n; // Read N

	int i = 2; // Initialization
	while(i<=n){
		cout<<i<<' ';

		i = i + 2;
	}

	cout<<endl;
	return 0;
}