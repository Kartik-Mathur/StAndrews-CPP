// Exponent
#include <iostream>
using namespace std;

int fun(int x,int n){
	if( n == 0 ){
		return 1;
	}

	return x*fun(x,n-1);
}

int main(){
	int x,n;
	cin>>x>>n;

	cout<<fun(x,n);


	cout<<endl;
	return 0;
}