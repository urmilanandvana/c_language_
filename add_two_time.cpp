#include<iostream>
using namespace std ;
class  Time
{
	public :
	int   minit, hours ;
};

int main()
{
    Time   t1, t2;
    int h, t, s1, s2, m;
	cout << "Enter the hours = " ;
	cin  >> t1.hours ;
	cout << "Enter the minit = " ;
	cin  >> t1.minit ;
	
	cout << "Enter the hours = " ;
	cin  >> t2.hours ;
	cout << "Enter the minit = " ;
	cin  >> t2.minit ;
	
	s1 = t1.hours + t2.hours ;
	s2 = t1.minit + t2.minit ;
	
	if( s2 > 60 )
	{
		t = s2 /60 ;
		
		s1 = s1 + t ;
		s2 = s2 - (t*60) ;
	}
	
	
	cout << s1 << "hours " << s2 << "minit" ;
}
 








