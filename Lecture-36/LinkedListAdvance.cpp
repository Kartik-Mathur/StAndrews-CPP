// LinkedListAdvance
#include <iostream>
#include <list>
using namespace std;

class Fruits{
public:
	char name[100];
	char color[100];
	int sweetness;

	Fruits(char *n,char *c,int s){
		strcpy(name,n);
		strcpy(color,c);
		sweetness = s;
	}
};

int main(){
	
	int a[]={2,4,6,8,10,11,12};
	int n = sizeof(a)/sizeof(int);
	list<int> l1(a,a+n); // Initialization of LinkedList

	for(auto data: l1){ // for every node that belongs to l1
		cout<<data<<"-->";
	}
	cout<<"NULL"<<endl;

	// Adding objects into linked list to store multiple properties
	list<Fruits> l;
	l.push_back({"Mango","Yellow",95});
	Fruits f("Apple","Red",80);
	l.push_back(f);
	l.push_back({"Orange","Orange",85});
	l.push_back({"Guava","Green",56});
	for(auto node:l){// every node is an object-Fruits
		cout<<"Name : "<<node.name<<", ";
		cout<<"Color: "<<node.color<<", ";
		cout<<"sweetness : "<<node.sweetness<<endl;
	}
	// int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		char n[100],c[100];int s;
		cin>>n>>c>>s;
		// l.push_back({n,c,s});
		Fruits f(n,c,s);
		l.push_back(f);
	}

	for(auto node:l){// every node is an object-Fruits
		cout<<"Name : "<<node.name<<", ";
		cout<<"Color: "<<node.color<<", ";
		cout<<"sweetness : "<<node.sweetness<<endl;
	}


	return 0;
}