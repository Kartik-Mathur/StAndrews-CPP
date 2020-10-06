// PrintIncNumbers
#include <iostream>
using namespace std;

void PrintIncNumbers(int i,int n){
	// Base case
	if( i==n+1 ){
		return;
	}

	// Recursive case
	PrintIncNumbers(i+1,n);
	cout<<i<<' ';
}

int main(){
	int n;
	cin>>n;

	PrintIncNumbers(1,n);


	cout<<endl;
	return 0;
}