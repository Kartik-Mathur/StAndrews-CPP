#include <iostream>
using namespace std;

int main(){
	
	int a[]={10,20,30,40,50};
	int n = 5;
	int key;
	cin>>key;

	int s = 0,e = n-1;
	int ans = -1;

	while(s<=e){
		int mid = (s+e)/2;
		if(key == a[mid]){
			ans = mid;
			break;
		}
		else if(key > a[mid]){
			s = mid+1;
		}
		else{
			e = mid - 1;
		}
	}
	if(ans == -1){
		cout<<"Key Not Found!";
	}
	else{
		cout<<"Key found at "<<ans;
	}
	cout<<endl;
	return 0;
}