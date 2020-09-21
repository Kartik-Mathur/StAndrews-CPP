// PrintPrimes
#include <iostream>
using namespace std;

int main(){
	
	int n,i,j;
	cin>>n;

	for(i = 2 ; i<= n ; i++){
		// if i-->Prime, Print it
		// else --> dont Print it
		for(j = 2 ; j <= i-1 ; j++){
			if(i%j == 0){
				// Number i is not Prime
				break;
			}
		}
		// if we exit the loop naturally i.e. condn fail, means prime number
		if( j == i){
			cout<<i<<' ';
		}
	}


	cout<<endl;
	return 0;
}