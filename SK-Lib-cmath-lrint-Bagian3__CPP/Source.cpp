
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double a;
	long int hasil;

	a = 78.21;
	hasil = lrint(a);
	cout << "Nearest rounding of " << a << " is " << hasil << endl;

	a = 60.5;
	hasil = lrint(a);
	cout << "Nearest rounding of " << a << " is " << hasil << endl;

	_getch();
	return 0;
}
