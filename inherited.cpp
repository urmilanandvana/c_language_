#include<iostream>
using namespace std;

class Mother 
{
	public:
		void display()
		{
			cout <<"hi Daugther" ;
		}
};
class Daugther : public Mother
{
	public:
		void display1()
		{
			cout <<"hello Mother" <<endl ;
		}
};

int main()
{
	Daugther d1;

	d1.display1();
	d1.display();
}

