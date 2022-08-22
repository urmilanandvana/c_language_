#include<iostream>
using namespace std ;
class House
{
	public:
    char ho_country[100] ;
	char ho_city[100] ;
	char ho_add[100] ;
	int  ho_no ;
};

class Room
{
	public :
		int f;
		int AC;
		int fm;
		int bed;
};
int main ()
{
	House h1 ;
	Room  r1 ;
	
	cout <<"you like the country = " ;
	cin  >> h1.ho_country ;
	cout <<"you like the city = " ;
	cin  >> h1.ho_city ;
	cout <<"you like the address = " ;
	cin  >> h1.ho_add ;
	cout <<"you like the number = " ;
	cin  >> h1.ho_no ;
	
	cout << "country = "  << h1.ho_country << endl
	     << "city = "    << h1.ho_city << endl
	     << "address = " << h1.ho_add << endl
	     << "number = "  << h1.ho_no << endl << endl ;
	     
	cout <<"how many fen = " ;
	cin  >> r1.f ;
	cout <<"how many AC = " ;
	cin  >>  r1.AC ;
	cout <<"how many Family members =  " ;
	cin  >> r1.fm ;
	cout <<"how many bed = " ;
	cin  >> r1.bed ;
	
	cout << "fen " << r1.f << endl
	     << "AC = "  << r1.AC << endl
	     << "Family members = " << r1.fm << endl
	     << "Bed = "  << r1.bed << endl << endl ;
	     
	          
	
}


