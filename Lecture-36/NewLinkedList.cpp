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

node* mergeLL(node* a, node* b){
	// base case
	if(a == NULL){
		return b; // b is list return b, 
		// if b is null return b only
	}
	if(b == NULL){
		return a;
	}

	// recursive case
	node* newHead;
	if(a->data<b->data){
		newHead = a;
		newHead->next = mergeLL(a->next,b);
	}
	else{
		newHead = b;
		newHead->next = mergeLL(a,b->next);
	}
	return newHead;
}

node* mergeSort(node* head){
	// base case
	if(head == NULL || head->next == NULL){
		return head;
	}
	// recursive case
	node* m = mid(head);
	node* head1 = m->next;
	m->next = NULL;
	// we have two ll, first is head and 
	// second is head1
	head = mergeSort(head);
	head1 = mergeSort(head1);

	// merge the sorted list
	node* newHead = mergeLL(head,head1);
	return newHead;
}

int main(){
	node* head=NULL;
	int a[]={1,4,6,3,6,6,6,7,8,0};
	int n = sizeof(a)/sizeof(int);
	for(int i = 0 ; i < n ; i++){
		InsertLLEnd(head,a[i]);
	}
	PrintLL(head);
	head = mergeSort(head);
	PrintLL(head);

	return 0;
}