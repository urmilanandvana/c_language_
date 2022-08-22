#include<iostream>
using namespace std ;
int main()
{
	int i;
	char s[100];
	cout << "Enter the value = ";
	cin >> s ;
	for(i=0;s[i];i++)
	{
		if(s[i]>=65 && s[i]<=96)
		{
			s[i]+=32;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			s[i]-=32;
		}
	}
	cout << "\ntoggle value = "<< s ;
	return 0;
}



