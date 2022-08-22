#include<iostream>
using namespace std ;
int main()
{
	int i,a[100],n,m,l,o,p,b,c,d,f,e;
	cout << "enter the N =";
	cin >> n;
	cout << "enter the M =";
	cin >> m;
	cout << "enter the L =";
	cin >> l;
	cout << "enter the O =";
	cin >> o;
	cout << "enter the P =";
	cin >> p;
	b=n*n*n;
	cout <<  b<< endl;
	c=m*m*m;
	cout << c << endl;
	d=l*l*l;
	cout << d << endl;
	e=o*o*o;
	cout << e << endl;
	f=p*p*p;
	cout << f << endl <<endl;
	
	a[0]=b;
	a[1]=c;
	a[2]=d;
	a[3]=e;
	a[4]=f;
	for(i=0;i<5;i++)
	{
	    cout << "a["<< i <<"]=" << a[i] <<endl;
	}
	return 0;
}


