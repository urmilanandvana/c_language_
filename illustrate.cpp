#include<iostream>
using namespace std ;

class X 
{
	public :
		int a;
		int b;
		
	public :
	
	     void setdata(int a , int b) 
		 {
		 	cout << "A = " << a << endl 
			     << "B = " << b << endl;
		 }	
};
class Y : public X 
{
	public :
		
		int m;
		void pro()
		{
			try
			{
				if(b == 0)
				{
		              throw 1;
				}
				else 
				{
					m = a/b ;
					cout << "a/b = " << m << endl ;
				}
			}
			catch(int n)
			{
				cout << "can't divide by 0" << endl ; 
			}
			catch(...)
			{
				cout << "No possible....." << endl ;
			}
		}
};

int main()
{
	Y n1;
	n1.setdata(4,0);
	n1.pro();
}








