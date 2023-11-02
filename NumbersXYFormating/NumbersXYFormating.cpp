#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter value of X: ";
    cin >> x;

    cout << "Enter value of Y: ";
    cin >> y;
    
    cout << "" << endl;
    cout << "Formating X: " << setiosflags(ios::left) << setw(12) << setfill('#') << x << endl;;

    cout << "" << endl;
    cout << "Formating Y: " << setiosflags(ios::right) << setiosflags(ios:: showpos) << setiosflags(ios:: fixed) << setprecision(2) << y << endl;;

    return 0;
}

