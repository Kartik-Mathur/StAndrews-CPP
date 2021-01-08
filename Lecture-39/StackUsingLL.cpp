#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){}
};

class Stack{
	node* head;
public:
	Stack(){
		head = NULL;
	}

	void push(int d){ // Insert at Front
		node* n = new node(d);
		if(head == NULL){
			head = n;
		}
		else{
			n->next = head;
			head = n;
		}
	}

	void pop(){ // Delete at front
		if(head){
			node* n = head;
			head = head->next;
			delete n;
		}
	}

	bool empty(){ // LL mei nodes hai ya nhi ?
		return head == NULL;
	}

	int top(){ // head ka data
		return head->data;
	}
};

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	Stack s;
	for(int i = 1 ; i <= 5 ; i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}



	cout<<endl;
	return 0;
}