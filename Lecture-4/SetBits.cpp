// SetBits
#include <iostream>
using namespace std;

int main(){
	int no;

	cin>>no; // no is initialized by the user
	int setbits = 0;

	for(; no!=0 ;no=no>>1){
		if((no&1) == 1){
			setbits++;
		}
	}

	cout<<setbits;


	cout<<endl;
	return 0;
}