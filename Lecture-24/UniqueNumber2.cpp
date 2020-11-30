// UniqueNumber2
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int a[100001];
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
		ans ^= a[i];
	}
	int ans1 = ans;

	int bitno = 0;
	while(ans!=0){
		if((ans&1) == 1){
			break;
		}
		ans = ans>>1;
		bitno++;
	}

	int val = pow(2,bitno);
	int no1= 0;
	for(int i = 0 ; i<n ; i++){
		if((a[i]&val) == 0){
			no1 ^= a[i];
		}
	}

	int no2 = ans1 ^ no1;
	if(no1>no2){
		cout<<no2<<" "<<no1<<endl;
	}
	else{
		cout<<no1<<" "<<no2<<endl;
	}




	return 0;
}