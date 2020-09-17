// Pattern1
#include <iostream>
using namespace std;

int main(){
	
	int n,spaces,no,i;
	cin>>n; // Read n

	int row = 1;
	while(row <= n){

		// Print the n-row times spaces
		spaces = 1;
		while(spaces<=n-row){
			cout<<' ';
			spaces = spaces + 1;
		}
		// print the increasing numbers
		// Print row times numbers and the number printing starts from : row
		i = 1,no = row;
		while(i<=row){
			cout<<no;
			no = no + 1;
			i = i + 1;
		}

		// Print the decreasing numbers row-1 times
		// Starting point of the number : no-2
		i = 1, no = no-2;
		while(i<=row-1){
			cout<<no;
			no = no-1;
			i = i + 1;
		}

		row = row + 1;
		cout<<endl;
	}

	cout<<endl;
	return 0;
}