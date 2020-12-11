#include <iostream>
using namespace std;
int cnt = 0;
char a[][10]={
	"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"
};

void keypad(char *ip,char *op,int i,int j){
	// base case
	if(ip[i] == '\0'){
		op[j] = '\0';
		cout<<op<<' ';
		cnt++;
		return;
	}

	// recursive case
	int indx = ip[i] - '0';
	for (int k = 0; a[indx][k]!='\0' ; ++k)
	{	
		op[j] = a[indx][k];
		keypad(ip,op,i+1,j+1);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	char ip[1000],op[1000];
	cin>>ip;

	keypad(ip,op,0,0);
	cout<<endl<<cnt;
	return 0;
}





















