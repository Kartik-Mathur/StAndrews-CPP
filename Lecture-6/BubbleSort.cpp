// BubbleSorts
#include <iostream>
using namespace std;

int main(){
	
	int a[6]={5,14,-3,2,1,0};
	int n = 6;
	for(int i = 0 ; i<n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	
	for(int i = 0 ; i < n-1 ; i++){ // n-1 times
		// n-1 times we need to do some work
		for(int j = 0 ; j <= n-2-i ; j++){
			if(a[j]>a[j+1]){
				// swap a[j] and a[j+1]
				// int temp = a[j];
				// a[j] = a[j+1];
				// a[j+1] = temp;
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}

	}
	
	for(int i = 0 ; i<n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}