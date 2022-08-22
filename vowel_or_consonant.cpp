#include<iostream>
using namespace std ;
int main()
{
	char i;
	cout << "enter the any charcter = " ;
	cin >> i ;
		if(i=='a' || i=='A' || i=='e'|| i=='E'|| i=='i'|| i=='I'|| i=='o'|| i=='O' || i=='u' || i=='U')
		{
			cout << "vowel" ;
		}
		else
		{
			cout << "consonant" ;
		}
	return 0;
}

