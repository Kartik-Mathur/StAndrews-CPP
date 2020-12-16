// StringToInteger
#include <iostream>
#include <cstring>
using namespace std;

int StringToInteger(char *a,int n){
	// base case
	if(n == 0){
		return 0;
	}
	// recursive case
	int last_digit = a[n-1]-'0';
	return StringToInteger(a,n-1)*10 + last_digit;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100];
	cin>>a;
	int n = strlen(a);

	cout<<StringToInteger(a,n);


	return 0;
}






