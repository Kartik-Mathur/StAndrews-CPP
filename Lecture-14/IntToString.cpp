// IntToString
#include <iostream>
using namespace std;

char a[][10]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void fun(int n){
	// Base case
	if(n == 0){
		return;
	}

	// Recursive case
	fun(n/10);
	int digit = n%10;
	cout<<a[digit]<<' ';
}

int main(){
	
	int n;
	cin>>n;

	fun(n);


	cout<<endl;
	return 0;
}