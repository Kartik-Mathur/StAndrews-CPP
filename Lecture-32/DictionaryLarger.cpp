#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
vector<string> v;
void permute(char *a,int i){
	// base case
	if(a[i] == '\0'){
		// cout<<a<<endl;
		v.push_back(a);
		return;
	}

	// recursive case
	bool visited[30] = {0};

	for(int j = i ; a[j] != '\0' ; j++){
		char ch = a[j];
		int indx = ch-'A';
		if(!visited[indx]){
			visited[indx] = true;
			swap(a[i],a[j]);
			permute(a,i+1);
			swap(a[i],a[j]);
		}
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[10];
	cin>>a;
	string k(a);

	sort(a,a+strlen(a));
	// cout<<a<<endl;
	permute(a,0);
	sort(v.begin(),v.end());
	for(int i = 0 ; i < v.size() ; i++){
		if(v[i]>k){
			cout<<v[i]<<endl;
		}
	}

	return 0;
}