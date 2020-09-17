#include <iostream>
using namespace std;

int main(){
	
	int a,d,n,term;
	cin>>a>>d>>n;

	int i = 1;
	while(i<=n){
		term = a+i*d;
		cout<<term<<' ';

		i = i+1;
	}
A

	cout<<endl;
	return 0;
}
