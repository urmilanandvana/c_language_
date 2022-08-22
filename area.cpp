#include<iostream>
using namespace std;

class Shape 
{
	public:
		int w, h, t, r;
};

class tringle : public Shape
{
	public :
		void area_t(int w , int h)
		{
		    t = (h*w)/2;
		    cout <<"area of triangle = " <<t ;
		    cout << endl <<endl ;
		}
};

class rectangle : public Shape
{
	public:
		void area_r(int w , int h)
		{
			r = h*w;
			
			cout << "area rectangle = " << r ;
		}
};

int main()
{
	tringle  t1;
	rectangle r1;
	int h, w;
	
	cout <<"Enter the Hight = " ;
	cin  >>h;
	cout <<"Enter the Width = " ;
	cin  >>w;
	
	t1.area_t(h,w);
	r1.area_r(h,w);
}

