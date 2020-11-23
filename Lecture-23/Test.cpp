#include <iostream>
using namespace std;


int main(){
	
	int a[32]={0};
	// to get a bucket of 8 bytes we use "long long int"
	int n;
	cin>>n;
	int x;

	for(int i = 1 ; i<= n ; i++){
		cin>>x;
		// add bits of x to array a
		for(int j = 0; j<32 ; j++){
			if((x&1) == 1){
				a[j]++;
			}
			x = x>>1;
		}
	}
	for(int i = 0 ; i<32 ; i++){
		a[i]%=3;
		// cout<<a[i]<<' ';
	}
	// cout<<endl;
	// converting binary to decimal

	int ans = 0;
	int mul = 1;
	for(int i = 0 ; i <32 ;i++){
		ans += mul*a[i];
		mul = mul*2;
	}
	cout<<ans;



	cout<<endl;
	return 0;
}