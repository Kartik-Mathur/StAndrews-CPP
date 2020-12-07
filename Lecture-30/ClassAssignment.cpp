// ClassAssignment
#include <iostream>
using namespace std;

int solve(int n){
	if(n == 0 || n == 1){
		return n;
	}

	return solve(n-1)+solve(n-2);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int t;
	cin>>t;
	int counter = 1;
	while(t--){
		int n;
		cin>>n;

		cout<<"#"<<counter<<" : "<<solve(n+2)<<endl;
		counter++;
	}


	return 0;
}