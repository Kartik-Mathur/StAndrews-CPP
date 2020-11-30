// StringToggleCase
#include <iostream>
using namespace std;

int main(){
	
	char a[1001];

	// cin.getline(a,1001);
	cin>>a;

	for(int i = 0 ; a[i] != '\0' ; i++){
		a[i] = (a[i]^' ');
	}
	cout<<a;

	cout<<endl;
	return 0;
}