// Break
#include <iostream>
using namespace std;

int main(){
	int i;

	for(i = 1; i <= 10; i++){
		cout<<i<<' ';
		
		if(i == 7){
			break;
		}
	}


	cout<<endl;
	return 0;
}