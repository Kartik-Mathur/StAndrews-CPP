// LargestOfN
#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	int n,no;
	cin>>n; // Read n
	// -inifinity --> INT_MIN : -2^31 --> header file : climits
	// +inifinity --> INT_MAX : 2^31-1 --> header file : climits

	int i = 1,max_no = INT_MIN;
	while(i<=n){
		cin>>no; // Read no
		if(no>=max_no){
			max_no = no;
		}

		i = i + 1;
	}
	cout<<"Max number is : "<<max_no;
	cout<<endl;
	return 0;
}