#include<iostream>
#include<string.h>
using namespace std ;

class Emp
{
	public:
    	int emp_id ;
	    char emp_name[100] ;
    	char emp_role[100] ;
    	int emp_salary ;
	
	public:
	void setdata ()
    {
	cout << "Enter your ID : " ;              cin >> this->emp_id ;  
	cout << "Enter your Name : " ;            cin >> this->emp_name ; 
	cout << "Enter your Role : " ;            cin >> this->emp_role ; 
	cout << "Enter your salary : " ;          cin >> this->emp_salary ;
	}
};

class Emp1
{
	public:
		int emp_exp ;
	    char emp_add[100] ;
	    char emp_email[100] ;
	    int  emp_cont ;
	    
	    public:
	    	void setdata1()
	    	{
	    		cout << "Enter your Job Experience : " ;  cin >> this->emp_exp ; 
            	cout << "Enter your Address : " ;         cin >> this->emp_add ; 
            	cout << "Enter your Email : " ;           cin >> this->emp_email ; 
            	cout << "Enter your Contact Number : " ;  cin >> this->emp_cont ;
            	cout << endl;
            	cout << endl << "*************************               ************************" << endl << endl ;
			}
};

class Detail : public Emp, public Emp1
{
	public:
	void getdata()
     {
	
   	cout << "Id : "                  << this->emp_id              << endl 
     	<<"Name : "                  << this->emp_name            << endl 
	    << "Age : "                  << this->emp_role            << endl 
	    << "Salary : "               << this->emp_salary          << endl 
	    << "Job Experience : "       << this->emp_exp             << endl
	    << "Address : "              << this->emp_add             << endl
	    << "Email : "                << this->emp_email           << endl 
		<< "Contact Number : "       << this->emp_cont            << endl  ;
		
		cout << endl << "*************************      ************************" << endl << endl ;
     }
};

int main()
{
     Detail d1;
     
     d1.setdata();
     d1.setdata1();
     d1.getdata();
}




