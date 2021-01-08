// BalancedParanthesis.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a){
	stack<char> s;

	for(int i = 0 ; a[i] ; i++){
		char ch = a[i];

		switch(ch){
			case '(' :
			case '{' :
			case '[' : 	s.push(ch);
						break;
			case ')' :
						if(s.empty() || s.top() != '('){
							return false;
						}
						s.pop();
						break;
			case '}' :	
						if(s.empty() || s.top() != '{'){
							return false;
						}
						s.pop();
						break;
			case ']' :
						if(s.empty() || s.top() != '['){
							return false;
						}
						s.pop();
		}
	}

	return s.size() == 0;

}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[] = "[{(a+b)+c*(d+f)}+(x+y)]";
	if(isBalanced(a)){
		cout<<"Balanced"<<endl;
	}
	else{
		cout<<"Not Balanced"<<endl;
	}


	return 0;
}