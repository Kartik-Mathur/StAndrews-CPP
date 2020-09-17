#include <iostream>
using namespace std;

int main(){
	
	int a;
	cin>>a;

	// if(condition){ Start of if
		// Work needs to be done if condition is true.

	// } endif
	
	if(a>10 && a<20){
		cout<<"Hello World"<<endl;
	}
	else if(a>=20 && a<30){
		cout<<"Big Bang!"<<endl;
	}
	else{
		cout<<"Welcome to Coding Blocks"<<endl;
	}


	
	return 0;
}