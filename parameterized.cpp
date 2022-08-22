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
	    
		City(int id, char name[], int age)
		{
	        this->id = id ; 
			strcpy(this->name,name);
			this->age = age; 
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
	City c1(1,"urvi",10), c2(2,"hemu",35),c3(3,"priya",45);
	c1.getdata();
	c2.getdata();
	c3.getdata();
}



