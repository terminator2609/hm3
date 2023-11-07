#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ModelandMarka, ModelandMarka2, ModelandMarka3;
    int Price, Price2, Price3;
    int Color, Color2, Color3;
    int Inches, Inches2, Inches3;

    cout << "Type the manufacturer and model of the first laptop" << endl;
    cout << "For example: HP - Acer Predator" << endl;
    cin >> ModelandMarka;
    cout << "Type price of the first laptop" << endl;
    cin >> Price;
    cout << "Type color of the first laptop" << endl;
    cin >> Color;
    cout << "Type inches of the first laptop" << endl;
    cin >> Inches;
    cout << "Type the manufacturer and model of the second laptop" << endl;
    cin >> ModelandMarka2;
    cout << "Type price of the second laptop" << endl;
    cin >> Price2;
    cout << "Type color of the second laptop" << endl;
    cin >> Color2;
    cout << "Type inches of the second laptop" << endl;
    cin >> Inches2;
    cout << "Type the manufacturer and model of the third laptop" << endl;
    cin >> ModelandMarka3;
    cout << "Type price of the third laptop" << endl;
    cin >> Price3;
    cout << "Type color of the third laptop" << endl;
    cin >> Color3;
    cout << "Type inches of the third laptop" << endl;
    cin >> Inches3;

    cout << "" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << setiosflags(ios::left) << "|" << setw(25) << "ManAndModel" << setw(2) << "|" << setw(25) << "Price" << "|" << setw(25) << "Color" << setw(2) << "|" << setw(25) << "Inches" << setw(2) << "|" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << "| " << setw(25) << ModelandMarka << "| " << setw(25) << Price << "| " << setw(25) << Color << "| " << setw(25) << Inches << "| " << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << "| " << setw(25) << ModelandMarka2 << "| " << setw(25) << Price2 << "| " << setw(25) << Color2 << "| " << setw(25) << Inches2 << "| " << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << "| " << setw(25) << ModelandMarka3 << "| " << setw(25) << Price3 << "| " << setw(25) << Color3 << "| " << setw(25) << Inches3 << "| " << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
    return 0;

}