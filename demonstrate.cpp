#include<iostream>
#include<string.h>
using namespace std ;

class City 
{
	private :
		int id;
		char name[100];
		int age;
	public :
	    
		City()
		{
			cout << "ID : " ; cin >> this->id ; cout << endl ;
			cout << "Name : " ; cin >> this->name ; cout << endl ;
			cout << "Age : " ; cin >> this->age ; cout << endl ;
		}	
	void getdata()
		{
			cout <<"ID : "<< this->id << endl 
			     <<"Name :"<<this->name <<endl
			     <<"Age :"<<this->age <<endl<<endl ;
		}
};

int main()
{
	city c1, c2,c3;
	c1.getdata();
	c2.getdata();
	c3.getdata();
}







