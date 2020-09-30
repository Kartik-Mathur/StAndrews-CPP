// LengthofString
#include <iostream>
using namespace std;

void ReadString(char *ch,char delimiter='\n'){
	char c;
	c = cin.get();
	int i = 0;
	while(c!=delimiter){
		ch[i] = c;
		i++;
		c = cin.get();
	}
	ch[i] = '\0';	
}

int length(char *a){
	int count = 0; 
	for(int i = 0 ; a[i] != '\0' ; i++){
		count++;
	}

	return count;
}

int main(){
	
	char ch[100];
	// cin.getline(ch,100); // Input the string
	ReadString(ch);
	
	cout<<length(ch);


	cout<<endl;
	return 0;
}