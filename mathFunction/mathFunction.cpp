#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int matFunc(double x)
{
	double result = pow(x, 4) * 4 * (x, 3) - 2;

	return result;
}


int main()
{
	double x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;

	cout << "Enter value 1: ";
	cin >> x1;

	cout << "Enter value 2: ";
	cin >> x2;

	cout << "Enter value 3: ";
	cin >> x3;

	cout << "Enter value 4: ";
	cin >> x4;

	cout << "Enter value 5: ";
	cin >> x5;

	cout << "Enter value 6: ";
	cin >> x6;

	cout << "Enter value 7: ";
	cin >> x7;

	cout << "Enter value 8: ";
	cin >> x8;

	cout << "Enter value 9: ";
	cin >> x9;

	cout << "Enter value 10: ";
	cin >> x10;


	
	cout << "" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "|" << setw(2) << "x" << setw(20) << "|" << setw(5) << "f(x)" << setw(20) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x1)) + 2) << x1 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x1)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x1))) + 2) << matFunc(x1) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x1))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x2)) + 2) << x2 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x2)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x2))) + 2) << matFunc(x2) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x2))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x3)) + 2) << x3 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x3)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x3))) + 2) << matFunc(x3) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x3))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x4)) + 2) << x4 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x4)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x4))) + 2) << matFunc(x4) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x4))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x5)) + 2) << x5 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x5)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x5))) + 2) << matFunc(x5) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x5))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x6)) + 2) << x6 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x6)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x6))) + 2) << matFunc(x6) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x6))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;


	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x7)) + 2) << x7 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x7)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x7))) + 2) << matFunc(x7) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x7))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;


	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x8)) + 2) << x8 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x8)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x8))) + 2) << matFunc(x8) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x8))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x9)) + 2) << x9 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x9)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x9))) + 2) << matFunc(x9) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x9))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;

	cout << "|" << setiosflags(ios::right) << setw(floor(log10(x10)) + 2) << x10 << resetiosflags(ios::right) << setw(20 + 1 - (floor(log10(x10)) + 1))
		<< "|" << setiosflags(ios::right) << setw(floor(log10(matFunc(x10))) + 2) << matFunc(x10) << resetiosflags(ios::right) << setw(23 + 1 - (floor(log10(matFunc(x10))) + 1)) << "|" << endl;
	cout << "------------------------------------------------" << endl;


	return 0;
}

