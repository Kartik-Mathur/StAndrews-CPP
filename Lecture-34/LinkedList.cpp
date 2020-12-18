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

void InsertLLMid(node* &head,node* &tail,int d,int pos){
	if(pos == 0){
		InsertLLStart(head,tail,d);
	}
	else if(pos>=length(head)){
		InsertLLEnd(head,tail,d);
	}
	else{
		node* temp = head;
		int cnt = 1;
		while(cnt<=pos-1){
			temp = temp->next;
			cnt++;
		}
		node* n = new node(d);
		n->next = temp->next;
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

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

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

	InsertLLMid(head,tail,7,3);
	PrintLL(head);

	return 0;
}