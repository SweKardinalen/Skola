#include <iostream>
using namespace std;

int main()

{

	int heltal1;
	int heltal2;
	int summa;
     

		cout << "Mata in forsta talet: ";
		cin >> heltal1;

		cout << "Mata in andra talet: ";
		cin >> heltal2;

		summa = heltal1 / heltal2;

		

		if (summa > 0)

			cout << "Om du dividerar " << heltal1 << " med " << heltal2 << " blir det " << summa << endl;
		else
			cout << "FEL" << endl;

}
