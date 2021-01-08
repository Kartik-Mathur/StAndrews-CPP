// InbuiltStack
#include <iostream>
#include <stack>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	stack<int> s;
	for(int i = 1 ; i <= 4 ; i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}


	cout<<endl;
	return 0;
}