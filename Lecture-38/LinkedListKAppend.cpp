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
	cin>>k;
	int len = length(head);
	if(k>=len){
		k = k%len;
	}
	if(k == 0){
		PrintLL(head);
	}
	else{
		KAppend(head,k);
		PrintLL(head);
	}
	return 0;
}