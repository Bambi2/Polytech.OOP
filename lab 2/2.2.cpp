#include <iostream>
using namespace std;

int main()
{
    int response;
    double temper;
    cout << "Enter 1 to convert fahrenheit to celsius, or 2 to convert celsius to fahrenheit: ";

    cin >> response;

    if (response == 1){
        cout << "Enter temperature in fahrenheit: ";
        cin >> temper;
        cout << "In celsius that's " << 5.0 / 9.0 * (temper-32.0) << endl;
    }
    else if (response == 2){
         cout << "Enter temperature in celsius: ";
         cin >> temper;
         cout << "In fahrenheit that's " << 9.0 / 5.0 * temper + 32.0 << endl;
    }
    else{
        cout << "Invalid values" << endl;
    }
}