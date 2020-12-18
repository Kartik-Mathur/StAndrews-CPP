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

void ReverseLL(node* &head,node* &tail){
	node* prev = NULL,*curr = head,*n;
	tail = head;
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

void DeleteStartLL(node* &head,node* &tail){
	if(head == NULL) return;
	if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		head= head->next;
		delete temp;
	}
}

void DeleteEndLL(node* &head,node* &tail){
	if(head == NULL) return;
	if(head->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		while(temp->next!=tail){
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		tail->next = NULL;
	}
}

void DeleteAtMid(node* &head,node* &tail,int pos){
	if(pos == 0){
		DeleteStartLL(head,tail);
	}
	else if(pos>=length(head)){
		DeleteEndLL(head,tail);
	}
	else{
		node* temp = head;
		int cnt = 1;
		while(cnt<=pos-1){
			temp = temp->next;
			cnt++;
		}
		node* x = temp->next;
		temp->next = x->next;
		delete x;
	}
}

node* SearchRec(node* head,int key){
	// base case
	if(head == NULL){
		return NULL;
	}

	// recursive case
	if(head->data == key){
		return head;
	}
	node* ans = SearchRec(head->next,key);
	return ans;
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

	node* ans = SearchRec(head,30);
	if(ans){
		cout<<"Found "<<ans->data<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}

	PrintLL(head);
	ReverseLL(head,tail);
	PrintLL(head);
	DeleteEndLL(head,tail);
	PrintLL(head);
	ans = mid(head);
	DeleteAtMid(head,tail,100);
	PrintLL(head);
	if(ans){
		cout<<"Mid element is "<<ans->data<<endl;
	}

	return 0;
}