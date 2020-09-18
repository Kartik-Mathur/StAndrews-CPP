// MinMax
#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	int mi = INT_MAX;
	int mx = INT_MIN;
	int sum = 0;
	int n,no;
	cin>>n;

	int i = 1;
	while(i<=n){
		cin>>no;

		if(no<mi){
			mi = no;
		}
		if(no>mx){
			mx = no;
		}
		sum = sum + no;

		i = i + 1;
	}

	cout<<"Minimum value : "<<mi<<endl;
	cout<<"Maximum value : "<<mx<<endl;
	cout<<"Mean value : "<<sum/n<<endl;

	cout<<endl;
	return 0;
}