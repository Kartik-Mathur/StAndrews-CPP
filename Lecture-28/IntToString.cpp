// IntToString
#include <iostream>
using namespace std;

char a[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void IntToString(int n){
	// Base
	if(!n){ // 0 means false !false or !0-> true
		return;
	}

	int digit = n%10;
	IntToString(n/10);
	cout<<a[digit]<<' ';x
}

int main(){
		
	int n;
	cin>>n;

	IntToString(n);


	cout<<endl;
	return 0;
}