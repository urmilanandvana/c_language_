#include<iostream>
using namespace std;
main()
{
	int n,i,b=0,c=0;
	char a[100];
	cout << "enter the value = ";
	cin >> a ;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			b++;
		}
		else if(a[i]>='65' && a[i]<='122')
		{
			c++;
		}
	}
	if(b>0 && c>0 || b>0)
	{
		cout << "Numeric string";
	}
	else
	{
		cout << "Not Numeric string" ;
	}
}




