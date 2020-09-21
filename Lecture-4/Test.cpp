#include <iostream>
using namespace std;

int main(){

	int i;

	for(i = 1 ; i <= 10 ; i++){
		cout<<i<<' ';
	}
	cout<<endl;
	

	// Alternative way to write the for loop is:
	i = 10; // init.
	for( ; i <= 20 ; ){
		cout<<i<<' ';

		i++; // Updation at last
	}
	cout<<endl;

	for(i = 20;i<=30;i++){
		cout<<i<<' ';
	}
	cout<<endl;
	return 0;
}