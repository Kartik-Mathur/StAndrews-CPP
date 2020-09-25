// MergeTwoSortedArrays
#include <iostream>
using namespace std;

void PrintArray(int a[],int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}	
	cout<<endl;
}


int main(){
	
	int a[7]={1,3,5};
	int b[4]={2,4,6,7};

	int m = 3;
	int n = 4;

	int i = m-1;
	int j = n-1;
	int k = m+n-1;
	PrintArray(a,3);
	PrintArray(b,4);

	while(i>=0 && j>=0){
		if(a[i]<b[j]){
			a[k] = b[j];
			k--; j--;
		}
		else{
			a[k] = a[i];
			k--; i--;
		}
	}

	if(j>=0){
		while(j>=0){
			a[k] = b[j];
			k--; j--;
		}
	}
	if(i>=0){ // this thing is optional
		while(i>=0){
			a[k] = a[i];
			k--; i--;
		}
	}

	PrintArray(a,7);

	
	return 0;
}