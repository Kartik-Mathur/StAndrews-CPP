// TOH
#include <iostream>
using namespace std;

void toh(int n,char src,char helper,char dest){
	// base case
	if(n == 0){
		return;
	}

	// recursive case
	toh(n-1,src,dest,helper); // Take n-1 disks from src to helper(dest), use destination tower to move
	cout<<"Taking disk "<<n<<" from "<<src<<" to "<<dest<<endl; // Manually disk move kro
	toh(n-1,helper,src,dest);
}

int main(){
	
	int n;
	cin>>n;
	toh(n,'A','B','C');

	return 0;
}