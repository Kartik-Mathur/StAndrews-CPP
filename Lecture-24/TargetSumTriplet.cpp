#include <iostream>
using namespace std;

int main(){
	
	int n,sum;
	int a[1000];

	cin>>n;
	for(int i = 0 ; i<n ; i++){
		cin>>a[i];
	}
	cin>>sum;
	sort(a,a+n);
	for(int i = 0 ; i < n-2 ; i++){
		int x = a[i];
		for(int j = i+1; j<n-1 ; j++){
			int y = a[j];
			for(int k = j+1 ; k<n ; k++){
				int z = a[k];
				if(x+y+z == sum){
					// int b[3] = {x,y,z};
					// // SortArray(b);
					// sort(b,b+3); // Inbuilt Function to sort
					// cout<<b[0]<<", "<<b[1]<<" and "<<b[2]<<endl;
					cout<<x<<", "<<y<<" and "<<z<<endl;

				}
			}
		}
	}

	return 0;
}