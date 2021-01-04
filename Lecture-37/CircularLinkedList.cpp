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

bool InsertLLEnd(node* &head,int d){
	bool KyaCycleHai = false;
	if(head == NULL){
		// First Node is getting inserted
		node* n = new node(d);
		head = n;
		return KyaCycleHai;
	}
	else{
		node* n = new node(d);
		node* temp = head;
		while(temp->next){
			if(temp->data == d){
				KyaCycleHai = true;
				break;
			}
			temp = temp->next;
		}
		if(KyaCycleHai == true){
			node* tempd = temp;
			while(tempd->next){
				tempd = tempd->next;
			}
			tempd->next = temp;
			return true;
		}else{
			temp->next = n;
			return false;
		}
	}
}


void PrintLL(node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	node* head=NULL;

	int data;
	cin>>data;
	while(data!=-1){
		if(InsertLLEnd(head,data) == true){
			cout<<"Cycle is Present"<<endl;
			breakCycle(head);
			break;
		}
		cin>>data;
	}
	PrintLL(head);

	return 0;
}

//  Second way of doing it, that works
// int main(){
// 	int freq[100005] = {0};

// 	int n;
// 	cin>>n;
// 	while(n!=-1){
// 		if(freq[n] != 0){
// 			break;
// 		}
// 		cout<<n<<' ';
// 		freq[n]++;
// 	}


// 	cout<<endl;
// 	return 0;
// }