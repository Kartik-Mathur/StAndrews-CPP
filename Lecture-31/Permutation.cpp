// Permutation
#include <iostream>
using namespace std;

void Permutation(char* a,int i){
	// Base case
	if(a[i] == '\0'){
		cout<<a<<endl;
		return;
	}

	// recursive case
	for(int j = i ; a[j] != '\0' ; j++){
		swap(a[j],a[i]);
		Permutation(a,i+1);
		swap(a[j],a[i]);
	}
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
		
	char in[100];
	cin>>in;

	Permutation(in,0);

	
	return 0;
}