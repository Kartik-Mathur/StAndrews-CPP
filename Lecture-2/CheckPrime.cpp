#include <iostream>
#include <climits>
using namespace std;

int main(){
	// INT_MAX -> +inifinity -->Header File : climits --> 2^31 - 1 (INT_MAX)
	// int inf = INT_MAX;
	// INT_MIN -> -inifinity --> -2^31
	int no;
	cin>>no; // Read n

	int i = 2; 
	while(i<no){

		if(no%i == 0){
			cout<<"Not Prime"<<'\n'; 
			return 0; // exit
		}

		i = i + 1;
	}
	cout<<"Prime";

	cout<<endl;
	return 0; // exit
}