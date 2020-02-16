#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";

    cin >> num;

    int t = 1;

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            cout << num * t << " ";
            t++;
        }
        cout << endl;
    }
}