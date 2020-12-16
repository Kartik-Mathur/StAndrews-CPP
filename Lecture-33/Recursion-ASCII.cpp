// Recursion-ASCII
#include <iostream>
using namespace std;

int reverse(int n){
	int sum = 0;
	while(n){
		sum = sum*10 + n%10;
		n = n/10;
	}
	return sum;
}
int cnt1 = 0;
void solve(char *a,int i,char *ans,int j){
	// base case
	if(a[i] == '\0'){
		ans[j] = '\0';
		cnt1++;
		cout<<ans<<' ';
		return;
	}
	// recursive case
	// 1. Skip the ith character
	solve(a,i+1,ans,j);
	// 2. Take the ith character
	ans[j] = a[i];
	solve(a,i+1,ans,j+1);

	// 2. Add ith ASCII characters to your answer
	int ascii = a[i];
	// count the digits of ascii number
	int total_digit_cnt = 0;
	int ascii1 = ascii;
	while(ascii1){
		total_digit_cnt++;
		ascii1/=10;
	}

	ascii = reverse(ascii);
	
	int x = j,cnt = 0;
	while(ascii){
		ans[x++] = '0' + ascii%10;
		cnt++;
		ascii/=10;
	}
	while(cnt<total_digit_cnt){
		ans[x++] = '0';
		cnt++;
	}
	solve(a,i+1,ans,j+total_digit_cnt);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100],ans[100];
	cin>>a;
	solve(a,0,ans,0);
	cout<<endl<<cnt1;
	// int n = 1234;
	// n = reverse(n);
	// cout<<n<<endl;

	return 0;
}
