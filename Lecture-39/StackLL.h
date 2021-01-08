#include <iostream>
#include "node.h"
using namespace std;

template<typename T>
class Stack{
	node<T>* head;
public:
	Stack(){
		head = NULL;
	}

	void push(T d){ // Insert at Front
		node<T>* n = new node<T>(d);
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
			node<T>* n = head;
			head = head->next;
			delete n;
		}
	}

	bool empty(){ // LL mei nodes hai ya nhi ?
		return head == NULL;
	}

	T top(){ // head ka data
		return head->data;
	}
};