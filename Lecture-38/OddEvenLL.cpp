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

void InsertLLEnd1(node* &head,int d){
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

void KAppend(node* &head,int k){
	node*s,*f,*n;

	// 1. set slow and head
	s = f = head;
	for(int i = 0 ; i < k ; i++){
		f = f->next;
	}
	// 2. Take slow and fast at their correct positions
	while(f->next){
		f = f->next;
		s = s->next;
	}

	// 3. Update the LL
	n = s->next;
	f->next = head;
	s->next = NULL;
	head = n;

}	

void PrintLL(node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

void ReverseLL(node* &cs, node* &ce, node* &head,node* p){
	node* prev = NULL,*curr = cs,*n;
	node* temp = cs;
	// while(temp){
	// 	cout<<temp->data<<"-->";
	// 	temp = temp->next;
	// }
	// cout<<endl;
	while(curr){
		n = curr->next;
		curr->next = prev;
		prev = curr;
		curr  = n;
	}

	if(p == NULL){
		head = ce;
	}
	swap(cs,ce);
	// temp = cs;
	// while(temp){ 
	// 	cout<<temp->data<<"-->";
	// 	temp = temp->next;
	// }
	// cout<<endl;
}

void Solve(node* &head){

	node* oh,*eh,*even,*odd,*n;
	if(head->next == NULL){
		return;
	}

	oh = head;
	eh = head->next;
	odd = oh; even = eh;

	while(odd->next and even->next){
		n = even->next;
		odd->next = n;
		odd = n;

		n = n->next;
		even->next = n;
		even = n;
	}

	odd->next = eh;
	head = oh;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int n,k;
	cin>>n;
	node* head = NULL;
	for(int i = 0 ; i < n ; i++){
		int data; cin>>data;
		InsertLLEnd1(head,data);
	}
	PrintLL(head);
	Solve(head);
	PrintLL(head);

	return 0;
}