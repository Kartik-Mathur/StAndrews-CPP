// DefaultArguments
#include <iostream>
using namespace std;

int add(int a=0,int b=0,int c=0){
	return a+b+c;
}

int main(){
	
	cout<<add(1,2,3)<<endl;
	cout<<add(1,2)<<endl;
	cout<<add(1)<<endl; // 1
	cout<<add()<<endl; // 0

	
	return 0;
}