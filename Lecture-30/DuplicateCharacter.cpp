// 
#include <iostream>
using namespace std;

string solve(string s){
	// base case
	if(s.size()<=1){
		return s;
	}

	// recursive case
	string small = s.substr(1);
	small = solve(small);

	if(s[0] == small[0]){
		string x = "*";
		return s[0]+x+small;
	}
	else{
		return s[0]+small;
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif	

	string s;
	cin>>s;

	cout<<solve(s);



	cout<<endl;
	return 0;
}