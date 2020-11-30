// MirrorInvOfNumber.cpp
#include <iostream>
#include <cmath>
using namespace std;

// int CountDigits(int n){
// 	int ans = 0;
// 	while(n){
// 		ans++;
// 		n=n/10;
// 	}
// 	return ans;
// }

bool solve(int n){
	int y = n;
	int ans = 0;
	int dc = 1;
	// int digitCount = CountDigits(n);

	while(n){
		int x = n%10;

		ans = ans + pow(10,x-1)*dc;

		n = n/10;
		dc++;
	}

	if(ans == y){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	int n;
	cin>>n;

	while(n--){
		// cout<<CountDigits(n);
		int no;
		cin>>no;
		if(solve(no)){
			cout<<"true";
		}
		else{
			cout<<"false";
		}

		cout<<endl;
	}
	return 0;
}