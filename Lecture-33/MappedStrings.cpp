// MappedStrings
#include <iostream>
#include <cstring>
using namespace std;

void Print(char *a,int n,int i,char* out,int j){
	// base case
	if(i == n){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// recursive case
	// 1. Take a single number
	int number = (a[i]-'0');
	char ch = 'A'+number - 1;
	out[j] = ch;
	Print(a,n,i+1,out,j+1);
	// 2. Take 2 digit number, it cannot exceed 26
	if(i <= n-2){
		number = (a[i]-'0')*10+(a[i+1]-'0');
		if(number<=26){
			char ch = 'A'+number-1;
			out[j] = ch;
			Print(a,n,i+2,out,j+1);
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100],ans[100];
	cin>>a;
	int n = strlen(a);
	Print(a,n,0,ans,0);

	return 0;
}

