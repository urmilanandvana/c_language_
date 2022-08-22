#include<iostream>
using namespace std ;

class Complex 
{
	private :
		int x;
		
	public :	
	void setdata(int a)
	{
		this-> x = a; 
		cout << "Enter the number = " << this->x << endl   ; 
	}	
	
	void getdata()
	{
		cout << endl << endl << "sum  = " << x << endl ; 
	}
	
	Complex operator+(Complex n)
	{
		Complex temp ;
		temp.x = this->x + n.x;
		
		return temp ;
	}
};

int main()
{
	Complex c1, c2, c3 ;
	
	c1.setdata( 4);
	c2.setdata( 2);
	
	
	c3 = c1 + c2 ;
	
	c3.getdata() ;
}

















