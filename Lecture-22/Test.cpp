#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d){
		data =d;
		next = NULL;
	}
};

int main(){
	
	node a(1);
	node b(2);

	a.next = &b;
	// (*(a.next)).data == a.next->data
	cout<<(*(a.next)).data<<endl;
	cout<<a.next->data<<endl;


	cout<<endl;
	return 0;
}