// ArraySum
#include <iostream>
using namespace std;

// void Add2(int *a,int *b,int n,int m){
// 	int i = n-1;
// 	int j = m-1;
// 	int carry = 0;
// 	while(i>=0 && j>=0){
// 		int sum = a[i]+b[j]+carry;
// 		a[i] = sum%10;
// 		carry = sum/10;
// 		i--;j--;
// 	}
// 	if(i>0){
// 		a[i]+=carry;
// 	}

// 	for(int i = 0 ; i < n ; i++){
// 		cout<<a[i]<<", ";
// 	}
// 		cout<<"END";
// }

void Add1(int *a,int *b,int n,int m){
	int i = n-1;
	int j = m-1;
	int carry = 0;
	while(i>=0 && j>=0){
		int sum = a[i]+b[j]+carry;
		b[j] = sum%10;
		carry = sum/10;
		i--;j--;
	}
	if(j>0){
		b[j]+=carry;
	}
	if(i<0 and j<0 and carry == 1){
		cout<<carry<<", ";
		for(int i = 0 ; i < m ; i++){
			cout<<b[i]<<", ";
		}
		cout<<"END";
	}
	else{
		for(int i = 0 ; i < m ; i++){
			cout<<b[i]<<", ";
		}
		cout<<"END";
	}
}

int main(){
	
	int a[1001],b[1001];

	int n,m ;
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i = 0; i < m ; i++){
		cin>>b[i];
	}


	if(m>=n){
		Add1(a,b,n,m);
	}
	else{
		// Add2(a,b,n,m);
		Add1(b,a,m,n);
	}




	cout<<endl;
	return 0;
}