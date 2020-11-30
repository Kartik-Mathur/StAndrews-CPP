// DifferenceAscii
#include <iostream>
using namespace std;

int main(){
	
	char a[1001];
	cin>>a;

	for(int i = 0 ; a[i] != '\0' ; i++){
		cout<<a[i];
		if(a[i+1]!='\0'){
			cout<<a[i+1]-a[i];
		}
	}


	cout<<endl;
	return 0;
}