#include <iostream>
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
	cout << "-------------------------------------------------------" << endl;
	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << "x" << setw(2) << "|" << setw(25) << "f(x)" << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x1 << setw(2) << "|"  << setw(25) << matFunc(x1) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x2 << setw(2) << "|" << setw(25) << matFunc(x2) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x3 << setw(2) << "|" << setw(25) << matFunc(x3) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x4 << setw(2) << "|" << setw(25) << matFunc(x4) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x5 << setw(2) << "|" << setw(25) << matFunc(x5) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x6 << setw(2) << "|" << setw(25) << matFunc(x6) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x7 << setw(2) << "|" << setw(25) << matFunc(x7) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x8 << setw(2) << "|" << setw(25) << matFunc(x8) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x9 << setw(2) << "|" << setw(25) << matFunc(x9) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << x10 << setw(2) << "|" << setw(25) << matFunc(x10) << "|" << endl;
	cout << "-------------------------------------------------------" << endl;

	
	return 0;
}

