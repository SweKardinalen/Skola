#include <iostream>
using namespace std;

int main()

{
	int AntalDagar;
	int PrisPerDag;

	cout << "Hur manga dagar vill bilen hyras?  ";
	cin >> AntalDagar;
	cout << "Vad kostar bilen per dag att hyra?  ";
	cin >> PrisPerDag;
	cout << "Bilen du vill hyra kommer kosta: " << AntalDagar * PrisPerDag << "KR" << endl;

	return 0;
}
