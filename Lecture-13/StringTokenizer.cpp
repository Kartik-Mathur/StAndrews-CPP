// StringTokenizer
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char a[100] = "1@.....23//////.......!!!!!!!654.....@@@@@@999!!!!!40";

	char *c = strtok(a,"@./!");

	while(c!=NULL){
		cout<<c<<endl;
		c = strtok(NULL,"@./!");
	}
	// cout<<c<<endl;

	// c = strtok(NULL,"@./!");
	// cout<<c<<endl;

	// c = strtok(NULL,"@./!");
	// cout<<c<<endl;

	// c = strtok(NULL,"@./!");
	// cout<<c<<endl;
	cout<<endl;
	return 0;
}