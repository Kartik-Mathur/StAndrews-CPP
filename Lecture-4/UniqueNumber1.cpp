// UniqueNumber1
#include <iostream>
using namespace std;

int main(){
	
	int n,i;
	cin>>n;
	int no,ans =0;
	for(i = 1; i<=n ;i++){
		cin>>no;
		ans = ans^no;
	}
	cout<<ans;

	cout<<endl;
	return 0;
}