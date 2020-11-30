// ReverseNStrings
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	char a[10001];
	cin.get(); // cin.ignore();
	for(int i = 0 ; i < n ; i++){
		cin.getline(a,10001);

		for(int i = strlen(a)-1 ; i>=0 ; i--){
			cout<<a[i];
		}
		cout<<endl;
	}


	// cout<<endl;
	return 0;
}