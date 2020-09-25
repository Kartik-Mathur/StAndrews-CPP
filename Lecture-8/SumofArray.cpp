// SumofArray
#include <iostream>
using namespace std;
int Sum(int a[],int n){
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum += a[i];
	}	
	return sum;
}

int main(){
	
	int a[10]={5,2,3,4,1,6,0};
	int n = 7;
	cout<<Sum(a,n);
	cout<<endl;
	return 0;
}