// CharacterArrays
#include <iostream>
using namespace std;

int main(){
	
	char c[]={'A','B','C','D','E','\0'};
	char a[]={'K','A','R','T','I','K','\0'};
	// char c[]="ABCDEF";
	int n = sizeof(c)/sizeof(char);

	for(int i = 0 ; i < n ; i ++){
		cout<<c[i];
	}
	cout<<endl<<c;
	cout<<endl;
	cout<<a<<endl;
	return 0;
}