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
	int a[]={1,4,6,3,6,6,6,7,8,0};
	int n = sizeof(a)/sizeof(int);
	list<int> l(a,a+n); // Initialization of LinkedList
	// for(int i = 0 ; i < n ; i++){
	// 	// cin>>no;
	// 	l.push_front(a[i]); // Insertion at front
	// 	// l.push_back(no); // Insertion at end
	// }
	// list<int>::iterator --> auto
	PrintLL(l);
	// Insert in middle 
	int pos,val;
	list<int>::iterator it = l.begin();
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
	l.unique();
	PrintLL(l);
	l.sort(compare);
	cout<<"Sorted List : ";
	PrintLL(l);
	// l.reverse();
	// cout<<"Dec Sorted List : ";PrintLL(l);

	return 0;
}