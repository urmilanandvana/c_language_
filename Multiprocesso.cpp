#include<iostream>
#include<string.h>
using namespace std ;

class Obj 
{
	private :
		char  s[100] ;
		
		public:
			void print()
			{ 
				cout << "Enter the IT full form : " << strcpy(this->s,"Information Technology") << endl << endl; 
			}
			
		    void print (string s)
	    	{
		         cout << "What is IT ?" << endl << endl <<s ;	   
	    	}
};

int main()
{
	Obj  b1;
	b1.print();
	b1.print("-> Information technology (IT) refers to everything that businesses use computers for.");
}











