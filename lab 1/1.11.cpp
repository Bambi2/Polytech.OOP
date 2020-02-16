#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    cout << setiosflags(ios::left) << "Surname" << setw(15) << "Name" << setw(15) << "Address" << setw(15) << "City" << endl
    << "Petrov" << setw(15) << "Vasiliy" << setw(15) << "Klenovaya 16" << setw(15) << "St. Petersburg" << endl 
    << "Ivanov" << setw(15) << "Sergey" << setw(15) << "Osinovaya 13" << setw(15) << "Nahodka" << endl
    << "Sidorov" << setw(15) << "Ivan" << setw(15) << "Berezovaya 21" << setw(15) << "Kaliningrad" << endl;
}