#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	cin>>n;

	int no = n;

	int sum_digits = 0;
	while(no){
		sum_digits+=no%10;
		no/=10;
	}

	int sum = 0;
	while(n%2 == 0){
		sum+=2;
		n=n/2;
	}

	for(int i = 3 ; i<=sqrt(n) ; i+=2){
		while(n%i == 0){
			// sum+=i;- Add digits of i
			int temp = i;
			while(temp){
				sum+=temp%10;
				temp/=10;
			}
			n/=i;
		}
	}

	if(n>2){
		while(n){
			sum+=n%10;
			n=n/10;
		}
	}

	if(sum_digits == sum){
		cout<<"1";
	}
	else{
		cout<<"0";
	}


	cout<<endl;
	return 0;
}