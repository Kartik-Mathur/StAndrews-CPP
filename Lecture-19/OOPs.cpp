// OOPs
#include <iostream>
using namespace std;

///////////////////////////////// BLUEPRINT ///////////////////////////////////
class Car{
public:
	int model;
	char name[100];
	int price;
};
///////////////////////////////// BLUEPRINT ///////////////////////////////////

int main(){
	
	Car A; // Object of class Car
	A.model = 2011;
	A.price = 100;
	// A.name = "BMW"; 
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	strcpy(A.name,"BMW");

	cout<<"Price : "<<A.price<<endl;
	cout<<"Model : "<<A.model<<endl;
	cout<<"Name  : "<<A.name<<endl<<endl;

	Car B;
	B.model = 2017;
	B.price = 500;
	strcpy(B.name,"Maruti");

	cout<<"Price : "<<B.price<<endl;
	cout<<"Model : "<<B.model<<endl;
	cout<<"Name  : "<<B.name<<endl;	

	cout<<endl;
	return 0;
}