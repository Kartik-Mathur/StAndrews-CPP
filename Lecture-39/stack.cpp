#include <iostream>
#include "StackLL.h"
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	Stack<int> s;
	for(int i = 1 ; i <= 5 ; i++){
		char ch = 64+i;
		s.push(ch);
	}

	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}

	// Stack<int> s;
	// for(int i = 1 ; i <= 4 ; i++){
	// 	s.push(i);
	// }

	// while(!s.empty()){
	// 	cout<<s.top()<<' ';
	// 	s.pop();
	// }




	cout<<endl;
	return 0;
}