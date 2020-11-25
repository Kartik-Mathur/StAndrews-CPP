// ArrayIntersection
#include <iostream>
using namespace std;

int main(){
	
	int n,a[10001],b[10001],c[10001];
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin>>b[i];
	}

	int k = 0;

	for(int i = 0 ; i < n ; i++){
		int find = a[i];
		for(int j = 0 ; j < n ; j++){
			if(b[j] == find){
				c[k] = find;
				k++;
				b[j] = INT_MAX;
				break;
			}
		}
	}

	sort(c,c+k);
	for(int i = 0 ;i<k ; i++){
		if(i == 0){
			cout<<"["<<c[i]<<", ";
		}
		else if(i != k-1){
			cout<<c[i]<<", ";
		}
		else{
			cout<<c[i]<<']';
		}

	}







	cout<<endl;
	return 0;
}