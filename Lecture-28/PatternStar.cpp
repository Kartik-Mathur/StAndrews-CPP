// PatternStar
#include <iostream>
using namespace std;

void Print(int i,int n){
	// Base
	if(i == n){ 
		return;
	}

	// Recursive
	for(int j = 0 ; j <=i ; j++){
		cout<<'*';
	}
	cout<<endl;
	Print(i+1,n);
}

int main(){
	
	int n;
	cin>>n;

	Print(0,n);

	// cout<<endl;
	return 0;
}