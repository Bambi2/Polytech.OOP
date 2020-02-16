#include <iostream>
using namespace std;




int main()
{
    float firstNumerator, firstDenominator, secondNumerator, secondDenominator, answerNumerator, answerDenominator;
    char divisionSign;

    cout << "Enter the first fractional number: ";
    cin >> firstNumerator >> divisionSign >> firstDenominator;

    cout << "Enter the second fractional number: ";
    cin >> secondNumerator >> divisionSign >> secondDenominator;

    answerNumerator = firstNumerator * secondDenominator + secondNumerator * firstDenominator;
    answerDenominator = firstDenominator * secondDenominator;
    cout << "Sum equals to " << answerNumerator << divisionSign << answerDenominator << endl; 


}