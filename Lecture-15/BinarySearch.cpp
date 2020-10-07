#include <iostream>
using namespace std;
// Learning Binary search

int bsearch(int *a,int s,int e,int key){
	if(s>e){
		return -1;
	}

	int mid = (s+e)/2;
	if(a[mid] == key){
		return mid;
	}
	else if(a[mid]>key){
		return bsearch(a,s,mid-1,key);
	}
	else{
		return bsearch(a,mid+1,e,key);
	}
}

int main(){
	
	int a[]={1,3,5,6,7,8};
	int n =sizeof(a)/sizeof(int);

	int key;
	cin>>key;
	cout<<bsearch(a,0,n-1,key);


	cout<<endl;
	return 0;
}