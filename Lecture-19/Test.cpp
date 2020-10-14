#include <iostream>
using namespace std;

int main(){
	
	int *a = new int;
	*a = 10;

	cout<<*a<<endl;

	float *f = new float;
	*f = 10.11;
	cout<<*f<<endl;

	delete a;
	a = NULL;
	delete f;
	f= NULL;

	cout<<*a<<endl;

	return 0;
}