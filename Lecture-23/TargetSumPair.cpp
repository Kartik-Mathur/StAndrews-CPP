// TargetSumPair
#include <iostream>
using namespace std;

int main(){
	
	int n,sum,a[1000];
	cin>>n;

	for(int i = 0 ; i<n; i++){
		cin>>a[i];
	}
	cin>>sum;

	for(int i = 0 ; i<=n-2 ; i++){
		int x = a[i];
		int y = sum-x;
		for(int j = i+1;j<n;j++){
			if(a[j] == y){
				if(x<y){
					cout<<x<<" and "<<y<<endl;
				}
				else{
					cout<<y<<" and "<<x<<endl;
				}
			}
		}
	}

	return 0;
}