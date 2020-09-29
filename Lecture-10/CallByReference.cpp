// CallByReference - Using Pointer
#include <iostream>
using namespace std;

void Update(int *x){
	*x = *x + 1000;
}

int main(){
	
	int a = 10;

	Update(&a);

	cout<<a<<endl;

	return 0;
}