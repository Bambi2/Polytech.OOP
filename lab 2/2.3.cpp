#include <iostream> 
using namespace std;


int main()
{
    int ch;

    unsigned long total = 0;

    cout << "Enter a number: ";
 
    while (ch = getche() != '\r'){
        
        total = total * 10 + ch - '0';
    }

    cout << "Number is: " << total << endl;
}