// UserInputArray
#include <iostream>
using namespace std;

int main(){
	
	int a[100000];
	int n;
	cin>>n; // max size of n can be : 10

	for(int i = 0 ; i < n ; i++){
		cin>>a[i]; // Input --> taking input to store the values in the array
	}

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' '; // output --> printing the array
	}


	cout<<endl;
	return 0;
}