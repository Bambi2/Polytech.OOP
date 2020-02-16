#include <iostream>
using namespace std;


int main()
{
    float cufeet, gallons;

    cout << "How much gallons? ";
    cin >> gallons;

    cufeet = gallons / 7.481;

    cout << cufeet << endl;
    
    return 0;
}