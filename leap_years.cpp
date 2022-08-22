#include<iostream>
using namespace std ;
int main()
{
	int i;
	for(i=2000;i<=3000;i++)
	{
		if(i%400==0 && i%100!=0 || i%4==0)
		{
			cout << i << "  ";
		}
	}
	return 0;
}

