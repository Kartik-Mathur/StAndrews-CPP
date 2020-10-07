// StringToInt
#include <iostream>
#include <cstring>
using namespace std;

int StringToInt(char *a, int i){
	if( i==0 ){
		return 0;
	}

	int digit = a[i-1] - '0';
	return StringToInt(a,i-1)*10+digit;
}

int main(){
	
	char a[100];
	cin>>a;
	int len = strlen(a);
	cout<<(StringToInt(a,len)*10 + 1);

	cout<<endl;
	return 0;
}