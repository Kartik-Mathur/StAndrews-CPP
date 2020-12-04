// InvertedStarPattern
#include <iostream>
using namespace std;

void Pattern(int n,int i){
	if(i == n){
		return;
	}

	for(int j = 1 ; j<=n-i ; j++){
		cout<<"*\t";
	}
	cout<<endl;
	Pattern(n,i+1);
}

int main(){

	int n;
	cin>>n;
	Pattern(n,0);
	
	return 0;
}