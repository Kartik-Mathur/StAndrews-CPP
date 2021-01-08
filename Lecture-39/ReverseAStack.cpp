// ReverseAStack
#include <iostream>
#include <stack>
using namespace std;

void InsertAtEnd(stack<int> &s,int topElement){
	if(s.empty()){
		s.push(topElement);
		return;
	}

	int top = s.top();
	s.pop();
	InsertAtEnd(s,topElement);
	s.push(top);
}

void ReverseAStack(stack<int> &s){
	if(s.empty()){
		return;
	}

	int topElement = s.top();
	s.pop();
	ReverseAStack(s);
	InsertAtEnd(s,topElement);
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	stack<int> s;
	for(int i = 1 ; i <= 4 ; i++){
		s.push(i);
	}

	ReverseAStack(s);
	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}	





	cout<<endl;
	return 0;
}