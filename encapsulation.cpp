#include<iostream>
#include<string.h>
using namespace std ;
class Hotel
{
    private :
	int hot_id ;
	char hot_name[100] ;
	char hot_type[100] ;
	int hot_size ;
	char  hot_room[100] ;
	int hot_esyear ;
    char hot_add[100] ;
	char hot_rat[100] ;
	char hot_web[100] ;
 
public:
void setdata ()
{
	cout << "Enter your ID : " ;              cin >> this->hot_id ;  
	cout << "Enter your Name : " ;            cin >> this->hot_name ; 
	cout << "Enter your Type : " ;             cin >> this->hot_type ; 
	cout << "Enter your staff Size : " ;            cin >> this->hot_size; 
	cout << "Enter your Room size : " ;           cin >> this->hot_room ; 
	cout << "Enter your Establish year : " ;            cin >> this->hot_esyear ; 
	cout << "Enter your Address : " ;                 cin >> this->hot_add ;                       
	cout << "Enter your Rating type : " ;                   cin >> this->hot_rat ; 
	cout << "Enter your Website : " ;                   cin >> this->hot_web ; 
	cout << endl;
	
	cout << endl << "*************************               ************************" << endl << endl ;
	
}

void getdata()
{
	
	cout << "Id : "                     << this->hot_id              << endl 
     	<<"Name : "                     << this->hot_name            << endl 
	    << "Type : "                    << this->hot_type            << endl 
	    <<"staff Size : "               << this->hot_size           << endl 
        <<"Room size :"                 << this->hot_room            << endl
	    <<"Establish year : "           << this->hot_esyear            << endl 
		<< "Address : "                 << this->hot_add        << endl  
		<< "Rating type : "             << this->hot_rat << endl
		<< "Website : "                 << this->hot_web << endl  ;
		
		cout << endl << "*************************      ************************" << endl << endl ;
		
}
		
};


int main()
{
     Hotel h[100] ;
     int  i, n;
     
     cout << "how many hotel information  = " ;
     cin  >> n ;
     
     for(i=0;i<n;i++)
     {
     	h[i].setdata();
	 }
	 
	 for(i=0;i<n;i++)
     {
     	h[i].getdata();
	 }
}



