#include <iostream>
using namespace std;

int main(){
	
	int n;
	int a[100]={0};

	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}

	//   4 3 6 5 3 5 7 4
// lmax	 0 4 4 6 6 6 6 7
// rmax  7 7 7 7 7 7 4 0
	int lmax[100]={0};
	int rmax[100]={0};
	int ans = 0;

	for(int i = 1; i<n ; i++){
		lmax[i] = max(lmax[i-1],a[i-1]);
	}

	for(int i = 0 ; i<n ; i++){
		cout<<lmax[i]<<' ';
	}
	cout<<endl;
	for(int i = n-2; i>=0 ; i--){
		rmax[i] = max(rmax[i+1],a[i+1]);
	}
	
	for(int i = 0 ; i<n ; i++){
		cout<<rmax[i]<<' ';
	}

	cout<<endl;

	for(int i = 0; i<n ; i++){
		int x = min(lmax[i],rmax[i])-a[i];
		if(x>0){
			ans += x;
		}
	}
	cout<<ans<<endl;













	cout<<endl;
	return 0;
}