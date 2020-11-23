// BiggestNumber
#include <iostream>
#include <cmath>
using namespace std;

int CountDigits(int n){
	int ans = 0;
	while(n){
		ans++;
		n = n/10;
	}
	return ans;
}

int main(){
	int arr[200]={0};
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		for(int i=0;i<=n-2;i++){
			for(int j = 0; j<=n-2-i; j++){
				int a = arr[j];
				int b = arr[j+1];
				int digits_a = CountDigits(a);
				int digits_b = CountDigits(b);

				int no1 = a*pow(10,digits_b)+b;
				int no2 = b*pow(10,digits_a)+a;
				if(no1>no2){
					swap(arr[j],arr[j+1]);
				}
			}
		}

		for(int i = n-1 ; i >=0 ; i--){
			cout<<arr[i];
		}

		cout<<endl;
	}
	return 0;
}