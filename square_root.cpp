#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
	int i,n,r,a[100];
	cout <<"Enter the number = " ;
	cin>> n;
	for(i=0;i<n;i++)
	{
	     cout << "a[" << i << "] = ";
		 cin >> a[i] ;	
	}	
    for(i=0;i<n;i++)
	{
		 cout << sqrt(a[i]) << endl;	
	}
	return 0;
}




