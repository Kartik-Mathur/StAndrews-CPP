// SortingInLinearTime
#include <iostream>
using namespace std;

int main(){
	
	int n,no;
	cin>>n;
	int a[3]={0};

	for(int i = 0; i < n ; i++)	{
		cin>>no;
		a[no]++;
	}
	// for(int i = 0 ; i < 3 ; i++){
	// 	cout<<a[i]<<' ';
	// }
	// cout<<endl;

	for(int i = 0 ; i < 3 ; i++){
		int n = a[i];
		for(int j = 0 ; j < n ; j++){
			cout<<i<<' ';
		}
	}

	cout<<endl;
	return 0;
}