// ReplaceAllPi
#include <iostream>
using namespace std;

string solve(string s){
	// base case
	if(s.size()<=1){
		return s;
	}

	// Recursive case
	if(s.substr(0,2) == "pi"){
		string ChotaAns = solve(s.substr(2));
		return "3.14"+ChotaAns;
	}
	else{
		string ChotaAns = solve(s.substr(1));
		return s[0]+ChotaAns;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;

		cout<<solve(s)<<endl;
	}
	return 0;
}