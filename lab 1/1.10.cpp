#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float pound, shilling, penny;

    cout << "How many pounds do you have? ";

    cin >> pound;

    cout << "How many shillings do you have? ";

    cin >> shilling;

    cout << "How many pennies do you have? ";

    cin >> penny;

    float newPenny = (penny / 12 + shilling) * 5 / 100;

    float answer = newPenny + pound;

    cout << fixed << setprecision(2);
    cout << "New currency:  £" << answer << endl;

}