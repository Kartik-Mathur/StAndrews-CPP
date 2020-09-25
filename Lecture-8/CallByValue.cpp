// CallByValueReference
#include <iostream>
using namespace std;

void update(int x){
	cout<<"X : "<<x<<endl;
	x = x + 1;
	cout<<"X : "<<x<<endl;
}

int main(){
	
	int a = 1;
	cout<<"Before Update : "<<a<<endl;

	update(a); // a = a + 1;
	cout<<"After Update : "<<a;

	cout<<endl;
	return 0;
}