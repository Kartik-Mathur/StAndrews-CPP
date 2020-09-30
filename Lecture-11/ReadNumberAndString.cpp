// ReadNumberAndString
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	cin.ignore();

	char arr[100];
	cin.getline(arr,100);

	cout<<n<<endl;
	for(int i=0;arr[i]!='\0';i++){
		cout<<arr[i];
	}
	cout<<endl;
	return 0;

}