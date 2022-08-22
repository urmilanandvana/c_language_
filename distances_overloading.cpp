#include<iostream>
using namespace std ;

class Complex 
{
	private :
		int f, i;
		
	public :	
	void setdata(int a, int b)
	{
		this-> f = a;
		this-> i = b; 
	}	
	
	void getdata()
	{
		cout << "(" << f << "   " << i << "j)" << endl ; 
	}
	
	Complex operator+(Complex n)
	{
		Complex temp ;
		temp.i = this->i + n.i;
		temp.f = this->f + n.f + (temp.i/12);
		temp.i = temp.i%12 ;
		
		return temp ;
	}
};

int main()
{
	Complex c1, c2, c3 ;
	
	c1.setdata( 3, 24);
	c2.setdata( 1, 19);
	
	c1.getdata();
	c2.getdata();
	
	c3 = c1 + c2 ;
	
	c3.getdata() ;
}













