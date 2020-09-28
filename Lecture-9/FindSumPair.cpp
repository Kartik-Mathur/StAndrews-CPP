// FindSumPair
// Write a function which takes a number X and an array and prints all 
// prints all pairs which sum to X.

#include <iostream>
using namespace std;

int main(){
	
	int a[]={1,4,3,6,8,6};
	int n = 6;
	int sum  = 7;

	for(int i = 0 ; i < n-1 ; i++){
		int x = a[i];
		int y = sum - x; // y we need to find in the remaining array
		for(int j = i+1 ; j < n ; j++){
			if(a[j] == y){
				cout<<"("<<x<<","<<y<<")"<<endl;
			}
		}
	}


	cout<<endl;
	return 0;
}
