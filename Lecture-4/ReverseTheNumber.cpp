// ReverseTheNumber
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n; // n is initialised

	// for( ; n!=0 ; n=n/10){
	// 	cout<<n%10;
	// }

	// Store the reversed Number
	int no = 0;
	for( ; n!=0 ; n/=10){
		no = no*10 + n%10;
	}
	cout<<no<<endl;
	cout<<no+11;

	cout<<endl;
	return 0;
}