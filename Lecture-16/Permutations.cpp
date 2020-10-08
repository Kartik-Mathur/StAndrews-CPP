// Permutations
#include <iostream>
using namespace std;

void Permutations(char *in,int i){
	// Base case
	if(in[i] == '\0'){
		cout<<in<<endl;
		return;
	}

	// recursive case
	for(int j = i; in[j] != '\0' ; j++){
		swap(in[i],in[j]);
		Permutations(in,i+1);
		swap(in[i],in[j]);
	}
}

int main(){
	
	char in[100]="abc";
	Permutations(in,0);


	cout<<endl;
	return 0;
}