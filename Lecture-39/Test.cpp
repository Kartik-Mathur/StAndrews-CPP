#include <iostream>
#include <vector>
using namespace std;

class Stack{
	vector<int> v;
public:
	void push(int d){
		v.push_back(d);
	}

	void pop(){
		v.pop_back();
	}

	bool empty(){
		return v.size() == 0;// if v.size() == 0, expression will give
		// true
	}

	int top(){
		return v[v.size()-1];
	}
};

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	Stack s;
	for(int i = 1 ; i <= 4 ; i++){
		char ch = 64+i;
		s.push(ch);
	}

	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}





	cout<<endl;
	return 0;
}