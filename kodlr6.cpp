#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Y= cos2x + lnx + 2    x =[2, 3] h=0.1

    int a, b;
    float h, x;
    double y;

    cout << "Enter [a, b] and h " << endl;
    cin >> a >> b >> h;
    x = a;

    while (x <= 3)
    {
        y = (cos(2 * x) + log10(x) + 2);
        cout << setw(10) << x << setw(12) << setprecision(2) << y << endl;
        x += h;
    }
    cout << "_________________________________________" << endl;
    x = a;

    do
    {
        y = (cos(2 * x) + log10(x) + 2);
        cout << setw(10) << x << setw(12) << setprecision(2) << y << endl;
        x += h;
    } while (x <= 3);

}