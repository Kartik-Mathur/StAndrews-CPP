// SortedOrNot
#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	if(n == 1 || n == 0){
		return true;
	}

	bool KyaChotaSortedHai = isSorted(a+1,n-1);
	if(a[0]<a[1] && KyaChotaSortedHai){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	int a[]={1,2,3,4,5,6};

	int n = sizeof(a)/sizeof(int);

	if(isSorted(a,n)){
		cout<<"Sorted";
	}
	else{
		cout<<"Not Sorted";
	}


	cout<<endl;
	return 0;
}