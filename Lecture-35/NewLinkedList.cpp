// LinkedList.cpp

#include <iostream>
using namespace std;
//////// BLUEPRINT /////////////////////////
class node{
public:
	int data;
	node* next;
	node(int d){
		data =d;
		next = NULL;
	}
};

int length(node* head){
	int cnt = 0;
	while(head){
		cnt++;
		head = head->next;
	}
	return cnt;
}

void PrintLL(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

void ReverseLL(node* &head){
	node* prev = NULL,*curr = head,*n;
	while(curr){
		n = curr->next;
		curr->next = prev;
		prev = curr;
		curr  = n;
	}
	head = prev;
}

node* mid(node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}

	node* fast = head->next;
	node* slow = head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}

void InsertLLEnd(node* &head,int d){
	if(head == NULL){
		// First Node is getting inserted
		node* n = new node(d);
		head = n;
	}
	else{
		node* n = new node(d);
		node* temp = head;
		while(temp->next){
			temp = temp->next;
		}
		temp->next = n;
	}
}



int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	node* head=NULL;

	InsertLLEnd(head,1);
	PrintLL(head);
	
	InsertLLEnd(head,2);
	InsertLLEnd(head,3);
	InsertLLEnd(head,4);
	InsertLLEnd(head,5);
	PrintLL(head);




	cout<<endl;
	return 0;
}