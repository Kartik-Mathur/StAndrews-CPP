// LargestNumber
#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	// int a[10]={1,5,4,6,8,9,10,-1,2,300};
	
	// int mx = INT_MIN; // INT_MIN -> header file : climits

	// for(int i = 0 ; i < 10 ; i++){
	// 	if(a[i]>mx){
	// 		mx = a[i];
	// 	}
	// }

	// cout<<"Largest value is : "<<mx;

	int a[10];
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}	
	
	int mx = INT_MIN; // INT_MIN -> header file : climits

	for(int i = 0 ; i < n ; i++){
		if(a[i]>mx){
			mx = a[i];
		}
	}

	cout<<"Largest value is : "<<mx;
	cout<<endl;
	return 0;
}


