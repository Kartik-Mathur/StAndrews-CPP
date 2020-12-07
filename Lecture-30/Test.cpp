#include <iostream>
using namespace std;

string moveAll(string s){
	// base case
	if(s.size() <= 1){
		return s;
	} 

	// Recursive case
	string small = s.substr(1);
	string ChotaAns = moveAll(small);

	if(s[0] == 'x'){
		return ChotaAns+s[0];
	}
	else{
		return s[0]+ChotaAns;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	// char a[100];
	// cin>>a;
	// cout<<strlen(a)<<endl;

	string s;
	cin>>s;

	cout<<moveAll(s);
	// cout<<s<<endl;
	// cout<<s.substr(1,3)<<endl;
	// cout<<s.substr(2)<<endl;
	// cout<<s.substr(3)<<endl;

	// cout<<'x'+s<<endl;
	// cout<<s+'x'<<endl;


	return 0;
}