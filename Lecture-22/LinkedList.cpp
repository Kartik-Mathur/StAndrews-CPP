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

void InsertLLEnd(node* &head,node* &tail,int d){
	if(head == NULL){
		// First Node is getting inserted
		node* n = new node(d);
		head = tail = n;
	}
	else{
		node* n = new node(d);
		tail->next = n;
		tail = n;
	}
}

void InsertLLStart(node* &head,node* &tail,int d){
	if(head == NULL){
		// First Node is getting inserted
		node* n = new node(d);
		head = tail = n;
	}
	else{
		node* n = new node(d);
		n->next = head;
		head = n;
	}
}

void PrintLL(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	
	node* head=NULL,*tail = NULL;

	int n,data;
	// cin>>n;
	// for(int i = 0; i<n; i++){
	// 	cin>>data;
	// 	InsertStartEnd(head,tail,data);
	// }

	InsertLLEnd(head,tail,1);
	InsertLLEnd(head,tail,2);
	InsertLLEnd(head,tail,3);
	InsertLLEnd(head,tail,4);
	PrintLL(head);

	InsertLLStart(head,tail,5);
	PrintLL(head);
	
	InsertLLStart(head,tail,6);
	PrintLL(head);

	return 0;
}