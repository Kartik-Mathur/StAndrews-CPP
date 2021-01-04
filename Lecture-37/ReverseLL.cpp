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


void PrintLL(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

void ReverseLLIterative(node* head){
	int len = length(head);
	node* c,*n;
	for(int i = len-1 ; i > 0 ; i--){
		c = head;
		for(int j = 1 ; j <= i ; j++){
			n = c->next;
			swap(c->data,n->data);
			c = c->next;
		}
	}
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	node* head=NULL;

	int n,data;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>data;
		InsertLLEnd(head,data);
	}
	cout<<"Before Reversing : "<<endl;
	PrintLL(head);
	ReverseLLIterative(head);
	cout<<"After Reversing : "<<endl;
	PrintLL(head);

	return 0;
}