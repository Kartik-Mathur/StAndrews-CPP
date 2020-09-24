// Functions
#include <iostream>
using namespace std;
// Syntax to create a function :
// datatype func_name(){
	//task
// }

void printHello(){
	cout<<"Hello World!"<<endl;
}

void oddEven(int n){
	if(n%2 == 0){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
}

void multiply(int a,int b){
	cout<<a*b<<endl;
}

void FarToCel(int init,int fval,int step){

	int farehn = init;
	while(farehn<=fval){

		int cel = (5.0/9)*(farehn-32);
		cout<<farehn<<" "<<cel<<endl;

		farehn = farehn + step;
	}	
	cout<<endl;
}

int main(){
	
	printHello(); // Calling or invoking the function
	
	int n = 5;
	// cin>>n;
	oddEven(n);
	
	int a=10,b=40;
	// cout<<"Enter a and b to multiply : ";
	// cin>>a>>b;
	multiply(a,b); 


	int init = 0,fval = 300,step = 20;
	FarToCel(init,fval,step);

	init = 0;fval=300,step = 30;
	FarToCel(init,fval,step);

	// we might have to use the division output inside of main



	cout<<endl;
	return 0;
}