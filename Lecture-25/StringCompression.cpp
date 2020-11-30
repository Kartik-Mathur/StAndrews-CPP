// StringCompression
#include <iostream>
using namespace std;

int main(){
	
	char a[10001],i;
	cin>>a;

	int cnt = 1;
	for(i = 1; a[i]!='\0' ; i++){
		if(a[i] == a[i-1]){
			cnt++;
		}
		else{
			cout<<a[i-1]<<cnt;
			cnt = 1;
		}
	}
	cout<<a[i-1]<<cnt<<endl;

	return 0;
}