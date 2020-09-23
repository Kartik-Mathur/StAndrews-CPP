// LinearSearch
#include <iostream>
using namespace std;

int main(){
	
	int a[]={1,4,3,5,7,6,2};
	int n = 7;
	int key = 1;
	
	for(int i = 0 ; i < n ; i++){
		if(a[i] == key){
			cout<<"Key found at index : "<<i<<endl;
			break;
		}
	}


	cout<<endl;
	return 0;
}