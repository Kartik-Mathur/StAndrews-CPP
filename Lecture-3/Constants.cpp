// Constants
#include <iostream>
using namespace std;
#define PI 3+1
#define Print cout<<
#define SEMI ;

int main(){
	
	const int area = 4000 SEMI
	// const int r; // Contants needs to be Initialized
	// cin>>r; -->Not Allowed

	Print"Area : "<<area<<endl SEMI

	// area = 5000;
	Print"Area : "<<area<<endl SEMI	
	
	int r;
	r = 4;

	Print"Circum : "<<2*PI*r;

	cout<<endl;
	return 0;
}