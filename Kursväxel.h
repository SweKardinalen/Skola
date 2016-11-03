#include <iostream>
using namespace std;

int main ()
{
	int 		dag_antal, dagspris, tot_pris;
	const int Skatt = 10;
	double 		kurs;
	
	cout << "Ange antal dagar och pris per dagr: ";
	cin >> dag_antal >> dagspris ;
	cout << "Växlingskrus? ";
	cin >> kurs ;	
	tot_pris = skatt + dag_antal * dagspris;
	cout << "Totalt Pris: " << tot_pris << "Euro" 
		<< "(" << tot_pris*kurs << "kr)" << endl;
		
	
}