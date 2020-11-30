// MaxFreqCharacter
#include <iostream>
using namespace std;

int main(){
	
	char a[10001];
	cin>>a;
	int freq[26] = {0};

	for(int i = 0 ; a[i]!='\0' ; i++){
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx]++;
	}

	int indx = 0,mx = 0;
	for(int i = 0 ; i<=25 ; i++){
		if(mx<freq[i]){
			indx = i;
			mx = freq[i];
		}
	}
	char ans = 'a'+indx;

	cout<<ans<<endl;
	return 0;
}