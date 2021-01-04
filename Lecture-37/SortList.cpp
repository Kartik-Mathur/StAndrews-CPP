// SortList
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

void SortList(node* &head){
	node *z=NULL,*o=NULL,*t=NULL,*zd=NULL,*od=NULL,*td=NULL;

	
	while(head){
		if(head->data == 0){
			if(z == NULL){
				z = head;
				head = head->next;
				z->next = NULL;
				zd = z;
			}
			else{
				zd->next = head;
				head = head->next;
				zd = zd->next;
				zd->next = NULL;
			}
		}
		else if(head->data == 1){
			if(o == NULL){
				o = head;
				head = head->next;
				o->next = NULL;
				od = o;
			}
			else{
				od->next = head;
				head = head->next;
				od = od->next;
				od->next = NULL;
			}
		}
		else{
			// head->data = 2;
			if(t == NULL){
				t = head;
				head = head->next;
				t->next = NULL;
				td = t;
			}
			else{
				td->next = head;
				head = head->next;
				td = td->next;
				td->next = NULL;
			}
		}
	}
	if(zd != NULL){
		zd->next = o;
		head = z;
	}
	if(od!=NULL){
		od->next = t;
		if(o and z==NULL){
			head = o;
		}
	}
	if(!o and !z){
		head = t;
	}
}

void SortList1Helper(node* &temp,node* &tempd,node* &head){
	if(temp == NULL){
		temp = head;
		head = head->next;
		temp->next = NULL;
		tempd = temp;
	}
	else{
		tempd->next = head;
		head = head->next;
		tempd = tempd->next;
		tempd->next = NULL;
	}
}

void SortList1(node* &head){
	node *z=NULL,*o=NULL,*t=NULL,*zd=NULL,*od=NULL,*td=NULL;
	
	while(head){
		if(head->data == 0){
			SortList1Helper(z,zd,head);
		}
		else if(head->data == 1){
			SortList1Helper(o,od,head);
		}
		else{
			SortList1Helper(t,td,head);
		}
	}

	if(zd != NULL){
		zd->next = o;
		head = z;
	}
	if(od!=NULL){
		od->next = t;
		if(o and z==NULL){
			head = o;
		}
	}
	if(!o and !z){
		head = t;
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
	cout<<"Before Sorting : "<<endl;
	PrintLL(head);
	SortList1(head);
	cout<<"After Sorting : "<<endl;
	PrintLL(head);

	return 0;
}

//  Second way of doing it, that works
// int main(){
// 	int freq[3] = {0};

// 	int n;
// 	cin>>n;
// 	for(int i = 0 ; i < n ; i++){
// 		int no; cin>>no;
// 		freq[no]++;
// 	}

// 	for(int i = 0 ; i <= 2 ; i++){
// 		for(int j = 1 ; j <= freq[i] ; j++){
// 			cout<<i<<' ';
// 		}
// 	}


// 	cout<<endl;
// 	return 0;
// }