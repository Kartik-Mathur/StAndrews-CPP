#include <iostream>
using namespace std;

void subsets(int *a,int i,int *ans,int j,int n,int k,int sum){
	if(sum == k){
		for(int m = j-1 ; m >=0 ; m--){
			cout<<ans[m]<<' ';
		}
		cout<<endl;
		return;
	}
	if(i == n){
		return;
	}

	// 1. Don't include ith character in output
	subsets(a,i+1,ans,j,n,k,sum);
	// 2. Include ith character in output
	ans[j] = a[i];
	subsets(a,i+1,ans,j+1,n,k,sum+a[i]);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int a[100]={0},ans[100]={0},n,k;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	cin>>k;
	subsets(a,0,ans,0,n,k,0);


	return 0;
}





















