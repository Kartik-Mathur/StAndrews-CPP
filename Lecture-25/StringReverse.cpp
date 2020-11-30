// StringReverse
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char a[10001];
	// cin>>a;
	cin.getline(a,10001);

	for(int i = strlen(a)-1 ; i>=0 ; i--){
		cout<<a[i];
	}


	cout<<endl;
	return 0;
}