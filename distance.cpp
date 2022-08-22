#include<iostream>
using namespace std ;
class  Dis
{
	public :
	int feet , inch ;
};

int main()
{
    Dis   d1, d2;
    int f, i, s1, s2, t;
	cout << "Enter the feet = " ;
	cin  >> d1.feet ;
	cout << "Enter the inch = " ;
	cin  >> d1.inch ;
	
	cout << "Enter the feet = " ;
	cin  >> d2.feet ;
	cout << "Enter the inch = " ;
	cin  >> d2.inch ;
	
	s1 = d1.feet + d2.feet ;
	s2 = d1.inch + d2.inch ;
	
	if( s2 > 12 )
	{
		t = s2 /12 ;
		
		s1 = s1 + t ;
		s2 = s2 - (t*12) ;
	}
	
	
	cout << s1 << "feet " << s2 << "inch" ;
}




