#include<iostream>
#include<string.h>
using namespace std ;

class A
{
	public:
		int id;
			char name[100];
			int  con ;
			int salary;
			int exp;
			char role[100];
			char email[100];
			char add[100];
		    char com[100];
		  
		 void seta()
		 {
		 	cout<<"Enter your Id :" ; cin >> this->id ;
		    cout<<"Enter your Name :" ; cin >> this->name ;
		    cout<<"Enter your Company Role :" ; cin >> this->role ;
		  } 
};

class B :public A
{
	public:
		void setb()
		{
			cout<<"Enter your salary :" ; cin >> this->salary ;
        	cout<<"Enter your Job Experience :" ; cin >> this->exp ;
		}
};

class C :public B
{
	public:
	getc()
	{
	cout <<"Name : " << this->name << endl
		 <<"Company Role : " << this->role << endl
		 <<"Salary : " << this->salary << endl ;
	}
	setc()
	{
		cout<<"Enter your Company Name :" ; cin >> this->com ;
		cout<<"Enter your Address :" ; cin >> this->add ;
	}
};

class D : public c
{
	public:
		setd()
		{
			cout<<"Enter your Email :" ; cin >> this->email ;
			    <<"Enter your Contact :" ; cin >> this->con ;
		}
		
		getdata()
		{
			cout <<"Id :" << this->id << endl 
		     <<"Name : " << this->name << endl
		     <<"Age : " << this->age << endl
		     <<"Salary : " << this->salary << endl
		     <<"JOb Experience : " << this->exp << endl
		     <<"Company Role : " << this->role << endl
		     << "Company Name : " << this->com << endl
		     <<"Email : " << this->email << endl 
		     <<"Address : " << this->add << endl 
			 <<"Contact : "<< this->con << endl << endl   ;
		}
};

int main()
{
	D e[100];
	int i,n;
	
	cout << "How many employee : " ;
	cin  >> n;
	
	 for(i=0;i<n;i++)
     {
     	e[i].setb();
     	e[i].setc();
     	e[i].setd();
	 }
	 
	 for(i=0;i<n;i++)
     {
     	e[i].getdata();
	 }
}
















