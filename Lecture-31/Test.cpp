#include <iostream>
using namespace std;

void Subsequences(char *in,int i,char* out,int j,int &cnt){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		cnt++;
		return;
	}

	// recursive case
	// 1. Don't include ith character
	Subsequences(in,i+1,out,j,cnt);
	// 2. Include ith Character
	out[j] = in[i];
	Subsequences(in,i+1,out,j+1,cnt);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
		
	char in[100],out[100];
	cin>>in;
	int cnt = 0;
	Subsequences(in,0,out,0,cnt);
	cout<<"Number of Suqsequences : "<<cnt<<endl;
	return 0;
}




















