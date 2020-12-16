#include <iostream>
using namespace std;

void subsets(int *a,int i,int *ans,int j,int n,int k,int sum,int &cnt){
	if(sum == k){
		for(int m = 0 ; m <j ; m++){
			cout<<ans[m]<<' ';
		}
		cnt++;
		cout<<' ';
		return;
	}
	if(i == n){
		return;
	}
	// 2. Include ith character in output
	ans[j] = a[i];
	subsets(a,i+1,ans,j+1,n,k,sum+a[i],cnt);
	// 1. Don't include ith character in output
	subsets(a,i+1,ans,j,n,k,sum,cnt);
}

int main(){

	int a[100]={0},ans[100]={0},n,k;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	cin>>k;
	int cnt = 0;
	subsets(a,0,ans,0,n,k,0,cnt);
	cout<<endl<<cnt;

	return 0;
}





















