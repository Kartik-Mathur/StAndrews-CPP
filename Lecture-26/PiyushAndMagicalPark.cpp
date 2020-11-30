// PiyushAndMagicalPark
#include <iostream>
using namespace std;

int main(){
	
	int n,m,k,s;
	char a[100][100];
	cin>>n>>m>>k>>s;

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin>>a[i][j];
		}
	}

	bool CanHeExit = true;
	for(int row = 0 ; row<n ; row++){

		int i = 0;
		while(i<m){

			if(a[row][i] == '.'){
				// s = s-3;
				if(i == 0){
					s = s - 2;
				}
				else{
					s = s - 3;
				}
				
			}
			else if(a[row][i] == '*'){
				if(i == 0){
					s = s + 5;
				}
				else{
					s = s + 4;
				}
				
			}
			else{
				if(i != 0){
					s = s - 1;
				}
				
				break;
			}

			if(s<k){
				CanHeExit = false;
				break;
			}
			// cout<<"Net Energy at "<<row<<","<<i<<" is "<<s<<endl;
			i++;
		}

		if(CanHeExit == false){
			break;
		}	
	}

	if(CanHeExit == true && s>=k){
		cout<<"Yes"<<endl<<s<<endl;
	}
	else{
		cout<<"No"<<endl;
	}



	cout<<endl;
	return 0;
}