#include <iostream>
#include <list>
using namespace std;
bool compare(int a,int b){
	return a<b;
}

void PrintLL(list<int> l){
	for(auto p = l.begin() ; p != l.end() ; p++){
		cout<<(*p)<<"-->";
	}
	cout<<"NULL"<<endl;	
}
int main(){
	// int* p = &a;
	// float* p = &b;
	// double* p = &c;
	
	// list<int> *p;
	// int n,no;
	// cout<<"Enter Number of elements ";
	// cin>>n;
	int a[]={2,4,6,8,10,11,12};
	int n = sizeof(a)/sizeof(int);
	list<int> l1(a,a+n); // Initialization of LinkedList

	int b[]={1,3,5,7,8,9,121};
	int m = sizeof(a)/sizeof(int);
	list<int> l2(b,b+m); // Initialization of LinkedList
	// Iteration over LinkedList using for each loop
	for(auto node: l1){ // for every node that belongs to l1
		cout<<node<<"-->";
	}
	cout<<endl;
	// for(int i = 0 ; i < n ; i++){
	// 	// cin>>no;
	// 	l.push_front(a[i]); // Insertion at front
	// 	// l.push_back(no); // Insertion at end
	// }
	// list<int>::iterator --> auto
	PrintLL(l1);
	PrintLL(l2);
	l1.sort();
	l2.sort();
	l1.merge(l2); // will merge two sorted lists
	PrintLL(l1);
	// Insert in middle 
	// int pos,val;
	// list<int>::iterator it = l1.begin();
	// cout<<"Enter the pos & val ";
	// cin>>pos>>val;
	// for(int i = 1 ; i < pos ; i++){
	// 	it++;
	// }

	// l.insert(it,val);
	// PrintLL(l);

	// int key;
	// cout<<"Enter element that you want to remove ";
	// cin>>key;

	// for(it = l.begin() ; it != l.end() ; it++){
	// 	if((*it) == key){
	// 		break;
	// 	}
	// }
	// l.erase(it);
	// PrintLL(l);

	// cout<<"Enter element that you want to remove ";
	// cin>>key;
	// l.remove(key);
	// PrintLL(l);
	// l.unique();
	// PrintLL(l);
	// l.sort(compare);
	// cout<<"Sorted List : ";
	// PrintLL(l);
	// l.reverse();
	// cout<<"Dec Sorted List : ";PrintLL(l);

	return 0;
}