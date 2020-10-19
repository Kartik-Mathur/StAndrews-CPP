// OOPs
#include <iostream>
using namespace std;

///////////////////////////////// BLUEPRINT ///////////////////////////////////
class Car{
private:
	int price; // Is only accessible inside the class
public:
	int model;
	char *name;
	// Default Functions
	// 1. Constructor- Whenever an object gets created its done via constructor only
	// This is used to create objects
	// Car(){ 
		// By Default constructor looks like this
	// }
	Car(){ // Default Constructor
		name = NULL;
		cout<<"Inside Default Constructor"<<endl;
	}
	// Parameterized Constructor
	Car(char *n,int p,int m){
		cout<<"Inside Parameterized Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		model = m;
	}

	// 2. Copy Constructor
	Car(Car &X){
		cout<<"In Copy Constructor"<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		model = X.model;
		price = X.price;
	}

	// 3. Copy Assignment Operator - Also called as operator overloading
	void operator=(Car &X){
		if(name != NULL){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		model = X.model;
	}

	// 4. Destructor
	~Car(){
		cout<<"Inside Destructor "<<name<<endl;
	}

	// UpdateName
	void UpdateName(char *n){
		if(name != NULL){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

	void SetPrice(int p){
		if(p>500 && p<600){
			price = p;
		}
		else{
			price = 500;
		}
	}

	int getPrice(){
		return price;
	}

	void Print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : $"<<price<<endl;
		cout<<"Model : "<<model<<endl<<endl;
	}
};
///////////////////////////////// BLUEPRINT ///////////////////////////////////

int main(){
	
	Car A; // Object of class Car
	Car B; // Object of class Car
	A.model = 2011;
	// A.price = 100;
	A.SetPrice(1000000);
	// A.name = "BMW"; 
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	// strcpy(A.name,"BMW");
	A.UpdateName("BMW");
	A.Print();

	B.model = 2017;
	// B.price = 500;
	B.SetPrice(500);
	// cout<<B.price<<endl;
	cout<<B.getPrice()<<endl;
	// strcpy(B.name,"Maruti");
	B.UpdateName("Maruti");
	B.Print();	

	Car C("Audi",500,2020); // Object of class Car
	// strcpy(C.name,"Audi");
	// C.price = 500;
	// C.model = 2020;
	Car D = C;
	Car E(D);

	D.name[0] = 'B';

	C.Print();
	D.Print();
	E.Print();

	// Car E; // Default Constructor
	// E = B;
	// E.Print();

	return 0;
}