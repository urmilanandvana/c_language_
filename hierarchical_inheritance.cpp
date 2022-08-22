#include<iostream>
#include<string.h>
using namespace std ;

class A
{
	public:
		int c, s, n;
			
};

class Cube : public A
{
	public:
	void Cube1(int n)
	{
		c = n*n*n;
	    cout << "Cube = " << c << endl ;
	}
};

class Sqrt :public A
{
	public:
	void Sqrt1(int n)
	{
		s = n*n;
	    cout << "Squre  = " << s << endl ;
	}
};

int main()
{
	Cube c1;
	Sqrt s1;
	int n;
	
	cout << "Enter the any number = " ;
	cin  >> n;
	
	c1.Cube1(n);
	s1.Sqrt1(n);
}











