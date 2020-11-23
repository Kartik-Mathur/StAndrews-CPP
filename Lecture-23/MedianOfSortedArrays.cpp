// MedianOfSortedArrays
#include <iostream>
using namespace std;

int main(){
	int a[2000],b[1000];
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin>>b[i];
	}
	int i = n-1,j=n-1,k=2*n-1;
	while(i>=0 && j>=0){
		if(a[i]<=b[j]){
			a[k--] = b[j--];
		}
		else{
			a[k--]=a[i--];
		}
	}
	while(j>=0){
		a[k--]=b[j--];
	}
	cout<<a[n-1];

	cout<<endl;
	return 0;
}