#include <iostream>
using namespace std;

int main(){
	int x;

	string a,b;
	cin>>x;

	cin.ignore();
	getline(cin,a); // to take input along with whitespaces
	getline(cin,b); // to take input along with whitespaces
	cout<<x<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	


	// string a = "Hello World"; // 1st way to initialize
	// string b(a); // 2nd way to initialize
	// string c = "Programming";
	// string d = "Programming";

	// for(int i = 0 ; i < a.length() ; i++){
	// 	cout<<a[i]<<' ';
	// }

	// cout<<endl;
	// cout<<a<<endl;
	// cout<<b<<endl;

	// // a should become "Hello WorldProgramming"
	// a = a + c;
	// cout<<a<<endl;

	// // compare two strings 
	// if(d == c){
	// 	cout<<"Exact Match"<<endl;
	// }
	// else{
	// 	cout<<"Donot Match"<<endl;
	// }

	return 0;
}