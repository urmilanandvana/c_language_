#include<iostream>
#include<string.h>
using namespace std ;

class ind 
{
	private :
	 static	char s[29][100] ;
		
	public :

		
static	void getdata()
	{
	     int i, j;
		 
		 for(i=0;i<29;i++)
		 {
	         for(j=0;s[i][j]!=NULL;j++)
			 {
			 	cout << s[i][j];
			 }
			cout << endl ; 	 	
		 }		
	}
		
};

char ind::s[29][100] = { "Andhra pradesh",
                     "Arunachal pradesh",
                     "Assam",
                     "Bihar",
                     "Chhttsgarh",
                     "Goa",
                     "Gujrat",
                     "Haryana",
                     "Himachal pradesh",
                     "Jummu Kashmir",
                     "Jharkhand",
                     "Karnataka",
                     "Kerala",
                     "Madhya pradesh",
                     "Maharashtra",
                     "Manipur",
                     "Meghalaya",
                     "Mizoram",
                     "Nagaland",
                     "Odisha",
                     "Punjab",
                     "Rajasthan",
                     "Sikkim",
                     "Tamil Nadu",
                     "Telangana",
                     "Tripura",
                     "Uttar Pradesh",
                     "Uttrakhand",
                     "West Bengal"
                   } ;
                   
int main ()
{
	ind::getdata();
}

