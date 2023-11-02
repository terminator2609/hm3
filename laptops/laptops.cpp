#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

struct Laptops
{
	string model;
	string brand;
	double price;
	string color;
	double diagonal;
};

int main()
{

	Laptops lp1, lp2, lp3;

	cout << "Laptop 1 model: ";
	cin >> lp1.model;

	cout << "Laptop 1 brand: ";
	cin >> lp1.brand;

	cout << "Laptop 1 color: ";
	cin >> lp1.color;

	cout << "Laptop 1 diagonal: ";
	cin >> lp1.diagonal;

	cout << "Laptop 1 price: ";
	cin >> lp1.price;


	cout << "" << endl;
	cout << "Laptop 2 model: ";
	cin >> lp2.model;

	cout << "Laptop 2 brand: ";
	cin >> lp2.brand;

	cout << "Laptop 2 color: ";
	cin >> lp2.color;

	cout << "Laptop 2 diagonal: ";
	cin >> lp2.diagonal;

	cout << "Laptop 2 price: ";
	cin >> lp2.price;


	cout << "" << endl;
	cout << "Laptop 3 model: ";
	cin >> lp3.model;

	cout << "Laptop 3 brand: ";
	cin >> lp3.brand;

	cout << "Laptop 3 color: ";
	cin >> lp3.color;

	cout << "Laptop 3 diagonal: ";
	cin >> lp3.diagonal;

	cout << "Laptop 3 price: ";
	cin >> lp3.price;


	cout << "" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << "Brand Model" << setw(2) << "|" << setw(25) << "Price(lv.)" << setw(2)
		<< "|" << setw(20) << "Color" << setw(2) << "|" << setw(25) << "Diagonal(inch.)" << "|" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;


	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << lp1.brand + " " + lp1.model << setw(2) << "|" << setiosflags(ios::fixed)
		<< setprecision(2) << setw(25) << lp1.price << setw(2) << "|" << setw(20) << lp1.color << setw(2) << "|"
		<< setprecision(0) << setw(25) << lp1.diagonal << "|" << endl;

	cout << "--------------------------------------------------------------------------------------------------------" << endl;


	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << lp2.brand + " " + lp2.model << setw(2) << "|" << setiosflags(ios::fixed)
		<< setprecision(2) << setw(25) << lp2.price << setw(2) << "|" << setw(20) << lp2.color << setw(2) << "|"
		<< setprecision(0) << setw(25) << lp2.diagonal << "|" << endl;

	cout << "--------------------------------------------------------------------------------------------------------" << endl;

	cout << setw(2) << setiosflags(ios::left) << "|" << setw(25) << lp3.brand + " " + lp3.model << setw(2) << "|" << setiosflags(ios::fixed)
		<< setprecision(2) << setw(25) << lp3.price << setw(2) << "|" << setw(20) << lp3.color << setw(2) << "|"
		<< setprecision(0) << setw(25) << lp3.diagonal << "|" << endl;

	cout << "--------------------------------------------------------------------------------------------------------" << endl;

}

