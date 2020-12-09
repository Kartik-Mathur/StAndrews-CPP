#include <iostream>
using namespace std;

bool compare(string a,string b){
	if(b.find(a) == 0){
		return a.length()<b.length();
	}
	else if(a>b){
		return true;
	}
	return false;

	// int i = 0,j = 0;
	// while(i<a.length() && j<b.length()){
	// 	if(a[i]>b[j]){
	// 		return true;
	// 	}
	// 	else if(a[i]<b[j]){
	// 		return false;
	// 	}
	// 	i++;
	// 	j++;
	// }
	// if(i == a.length()){
	// 	return true;
	// }
	// return false;

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	string a[3] = {
		"bat",
		"apple",
		"batman"
	};
	int n = 3;

	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = 0 ; j <= n-2-i ; j++){
			if(compare(a[j],a[j+1])){
				// swap a[j],a[j+1]
				swap(a[j],a[j+1]);
			}
		}
	}

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<endl;
	}

	return 0;
}