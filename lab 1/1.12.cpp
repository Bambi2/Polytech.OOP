#include <iostream>
#include <cmath>
using namespace std;



int main()
{

    double modernCurrency;

    cout << "How many decimal pounds do you have? ";

    cin >> modernCurrency;

    double oldPound;
    double modernPenny = modf(modernCurrency, &oldPound) * 100; 
    
    double shelling;
    int oldPenny = modf(modernPenny / 5, &shelling) * 12 + 0.5;

    cout << oldPound << "." << shelling << "." << oldPenny << endl;
}