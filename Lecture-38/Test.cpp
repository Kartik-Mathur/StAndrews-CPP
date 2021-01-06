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


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int n;
	cin>>n;
	node* head = NULL;
	while(n!=-1){
		InsertLLEnd1(head,n);
		cin>>n;
	}
	int k; cin>>k;

	node* s=head,*f = head;

	for(int i = 1 ; i <= k ; i++){
		f = f->next;
	}

	while(f){
		f = f ->next;
		s = s ->next;
	}
	cout<<s->data;


	return 0;
}