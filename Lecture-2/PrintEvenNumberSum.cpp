// PrintEvenNumberSum
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n; // Read n

	int i = 2;
	int sum = 0;
	while(i<=n){
		
		sum = sum + i;

		i = i + 2;
	}

	cout<<"Sum of all even no: "<<sum;

	cout<<endl;
	return 0;
}