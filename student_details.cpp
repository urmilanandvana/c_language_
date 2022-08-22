#include<iostream>
#include<string.h>
using namespace std ;

class Stu 
{
	private:
		int grid ;
		char name[100] ;
		int age ;
		int cont ;
		
	public :
		  
void setdata ()
{
	cout << "Enter your GRID : " ;              cin >> this->grid ;  
	cout << "Enter your Name : " ;              cin >> this->name ; 
	cout << "Enter your Age : " ;               cin >> this->age ; 
	cout << "Enter your Contact Number : " ;    cin >> this->cont ; 	
}	
	
void getdata()
{
	
	cout << "GRId : "                << this->grid                << endl 
     	<<"Name : "                  << this->name                << endl 
	    <<"Age : "                   << this->age                 << endl 
		<<"Contact Number : "        << this->cont            << endl  ;
}		
};

class Stdd
{
	private :
		static char collage[100] ;
		static char city[100] ; 
		       char cours[100] ; 
		       Stu d ;
		       
	public :
		  
void setdata ()
{
	d.setdata();
	cout << "Enter your Cours : " ;              cin >> this->cours ;  
	cout << endl;
	
	cout << endl << "*************************               ************************" << endl << endl ;
	
}

void getdata()
{
	d.getdata();
	cout << "Cours : "                << this->cours                << endl ;
	cout << endl << "*************************      ************************" << endl << endl ;
}
		       
};

char Stdd::collage[100] = "BMU" ;
char Stdd::city[100]="Surat" ;

int main()
{
	 Stdd s1[100] ;
	 int i,n;
	 cout << "how many Student = " ;
     cin  >> n ;
     
     for(i=0;i<n;i++)
     {
     	s1[i].setdata();
	 }
	 
	 for(i=0;i<n;i++)
     {
     	s1[i].getdata();
	 }
}











