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

void BubbleSortLL(node* &head){
	node* prev = NULL,*c=head,*n;
	int n1 = length(head);

	for(int i = 0 ; i < n1-1 ; i++){
		c = head,prev=NULL;
		while(c!=NULL && c->next!=NULL){
			n = c->next;
			if(c->data>n->data){
			// swapping takes place	
				if(prev == NULL){
				// 1. head is swapped
					c->next = n->next;
					n->next = c;
					head=prev=n;
				}
				else{
				// 2. head is not swapped
					prev->next = c->next;
					c->next = n->next;
					n->next = c;
					prev = n;
				}
			}
			else{
			// no swapping takes place
				prev=c;
				c=c->next;
			}
		}
	}

}

bool isCyclic(node* head){
	node* f = head, *s = head;

	while(f && f->next){
		f=f->next->next;
		s=s->next;
		if(f == s){
			return true;
		}
	}
	return false;
}

void breakCycle(node* head){
	if(!isCyclic(head)){
		return;
	}
	node* f = head, *s = head;

	while(f && f->next){
		f=f->next->next;
		s=s->next;
		if(f == s){
			break;
		}
	}

	s = head;
	node* prev = head;
	while(prev->next!=f){
		prev=prev->next;
	}
	while(f!=s){
		prev=f;
		f=f->next;
		s=s->next;
	}
	prev->next=NULL;
}

void CreateCycle(node* head){
	node* temp = head;
	while(temp->next){
		temp=temp->next;
	}
	temp->next = head->next->next;
}

int main(){
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	node* head=NULL;
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		int a; 
		cin>>a;
		InsertLLEnd(head,a);
	}
	// InsertLLEnd(head,9);
	// InsertLLEnd(head,8);
	// InsertLLEnd(head,7);
	// InsertLLEnd(head,6);
	// InsertLLEnd(head,5);
	// InsertLLEnd(head,4);
	// InsertLLEnd(head,3);
	// InsertLLEnd(head,2);
	// InsertLLEnd(head,1);
	// PrintLL(head);
	// BubbleSortLL(head);
	// PrintLL(head);
	// CreateCycle(head);
	// // PrintLL(head);

	if(isCyclic(head)){
		cout<<"Yes Cyclic"<<endl;
		breakCycle(head);
	}
	else{
		cout<<"Not Cyclic"<<endl;
	}
	PrintLL(head);
	cout<<endl;
	return 0;
}