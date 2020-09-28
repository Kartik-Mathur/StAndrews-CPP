// FindSumPair
#include <iostream>
using namespace std;

int main(){
	
	int a[]={1,4,3,6,8,6};
	int n = 6;
	int sum  = 7;
	for(int i = 0 ; i < n-1 ; i++){
		int curr = a[i];
		int y = sum - curr; // y we need to find in the remaining array
		for(int j = i+1 ; j < n ; j++){
			if(a[j] == y){
				cout<<"("<<curr<<","<<y<<")"<<endl;
			}
		}
	}


	cout<<endl;
	return 0;
}
