// Stack_HeaderFile
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack{
	vector<T> v;
public:
	void push(T d){
		v.push_back(d);
	}

	void pop(){
		v.pop_back();
	}

	bool empty(){
		return v.size() == 0;// if v.size() == 0, expression will give
		// true
	}

	T top(){
		return v[v.size()-1];
	}
};