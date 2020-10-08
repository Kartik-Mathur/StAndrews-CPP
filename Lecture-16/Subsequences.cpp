#include <iostream>
using namespace std;

void subsequence(char *in,char *out,int i,int j){
	// Base case
	if(in[i] == '\0'){
		// Output array will have a subsequence
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// Recursive case
	// 1. Append the ith character and ask the recursion to print the remaining
	out[j] = in[i];
	subsequence(in,out,i+1,j+1);

	// 2. Ignore the ith character and ask the recursion to print the remaining
	subsequence(in,out,i+1,j);
}

int main(){
	
	char out[100],in[100]="abc";
	
	subsequence(in,out,0,0);

	return 0;
}