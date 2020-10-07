#include <iostream>
using namespace std;

int Fun(int a,int b){
	if(b == 0){
		return 0;
	}

	return a + Fun(a,b-1);
}

int main(){
	

	int a,b;
	cin>>a>>b;

	cout<<Fun(a,b);

	cout<<endl;
	return 0;
}