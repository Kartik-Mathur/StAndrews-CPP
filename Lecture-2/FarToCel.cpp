// FarToCel
#include <iostream>
using namespace std;

int main(){
	
	int init,fval,step,cel;
	cin>>init>>fval>>step;

	int farehn = init;
	while(farehn<=fval){

		cel = (5.0/9)*(farehn-32);
		cout<<farehn<<" "<<cel<<endl;

		farehn = farehn + step;
	}

	return 0;
}