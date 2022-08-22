#include<iostream>
class Time 
{
	public :
		int h,m,s ;
};

int main()
{
	Time t1;
	cout << "Enter the hours = " ;
	cin  >> t1.h ;
	cout << "Enter the minit = " ;
	cin  >> t1.m ;
	cout << "Enter the second = " ;
	cin  >> t1.s ;
	
	 m =  (60*h) ;
	 s =  s -m ;
	 
	 cout << t1.h << ":" << t1.m << ":" <<t1.s ;
}








