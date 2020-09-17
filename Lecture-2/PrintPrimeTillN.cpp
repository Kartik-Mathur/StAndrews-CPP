#include <iostream>
using namespace std;

int main(){
	
	int n,i,flag;
	cin>>n; // read n

	int no = 2;
	while(no<=n){
		// if no is prime print it, else skip and move to next no
		i = 2; 
		flag = 1;
		while(i<no){
			if(no%i == 0){
				flag = 0;
			}
			i = i + 1;
		}
		if(flag == 1){
			cout<<no<<' ';
		}
		no = no+1;
	}

	cout<<endl;
	return 0;
}