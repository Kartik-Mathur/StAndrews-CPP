#include <iostream>
using namespace std;

int length(char *a){
	int count = 0; 
	for(int i = 0 ; a[i] != '\0' ; i++){
		count++;
	}

	return count;
}

void Copy(char *a, char* b){
	// Copy string b in string a
	int l = length(b);

	for(int i = 0 ; i <= l ; i++){
		a[i] = b[i];
	}
}

int main(){
	
	int n;
	cin>>n;	

	char a[100],largest[100];
	int l_len = 0;
	// cin.ignore(); // or cin.get();
	cin.get(); // Read a character and don't store it, that means it will be ignored.
	// cin.ignore() works the same way, it is more understandable that we are ignoring a character
	

	for(int i = 0 ; i < n ; i++){
		cin.getline(a,100);
		int curr_len = length(a);

		if(curr_len>l_len){
			// Update the largest string with the current string
			// and update the length of the largest string
			l_len = curr_len;
			Copy(largest,a);
		}
	}
	cout<<largest<<" with the length : "<<l_len;
	cout<<endl;
	return 0;
}