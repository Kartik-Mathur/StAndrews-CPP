// FunctionReturn
#include <iostream>
using namespace std;

int mulitply(int a,int b){
	int ans = a*b;
	return ans; // this is how we can return the value from the function using return
}

void CheckPrime(int no){
	int i = 2; 
	while(i<no){

		if(no%i == 0){
			cout<<"Not Prime"<<'\n'; 
			break;
		}

		i = i + 1;
	}
	if( i == no){
		cout<<"Prime"<<endl;
	}

	return; // this means function will return back and it is not returning anything

	cout<<"My World!"; // will not get printed, as it is after return 
}

void PrintPrimes(int n){
	int no = 2;
	while(no<=n){
		// if no is prime print it, else skip and move to next no
		int i = 2; 
		int flag = 1;
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
	return;
}


int main(){
	
	int a=10,b=20;
	// cin>>a>>b;
	int ans = mulitply(a,b);

	cout<<ans + 200<<endl;

	CheckPrime(11);

	PrintPrimes(50);
	cout<<endl;
	return 0;
}