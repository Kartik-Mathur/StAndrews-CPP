#include <iostream>
using namespace std;

void Print(int *x,int n){

	for(int i = n-1 ; i>=0 ; i--){
		cout<<*(x+i)<<' ';
	}
}

int main(){
	
	int arr[]={1,2,3,4,5};
	int n = 5;

	Print(arr,n);

	cout<<endl;
	return 0;
}