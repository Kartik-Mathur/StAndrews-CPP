// 
#include <iostream>
using namespace std;

int main(){
	
	int digits = 0, alpha = 0, white = 0, other = 0;

	char ch;
	// cin>>ch;
	ch = cin.get();

	while(ch!='$'){
		if((ch<='Z' && ch>='A') || (ch<='z' && ch>='a')){
			alpha++;
		}
		else if(ch == ' ' || ch == '\n' || ch == '\t'){
			white++;
		}
		else if(ch>='0' && ch<='9'){
			digits++;
		}
		else{
			other++;
		}

		// cin>>ch;
		ch = cin.get();
	}
	cout<<"Alphabets : "<<alpha<<endl;
	cout<<"WhiteSpace : "<<white<<endl;
	cout<<"Digits : "<<digits<<endl;
	cout<<"Other : "<<other<<endl;
	cout<<endl;
	return 0;
}