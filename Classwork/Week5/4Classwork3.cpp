#include <iostream>

using namespace std;

int main()
{
    int base;
    cout << "Enter a number and i can find the factorial! Tell me a number: ";
    cin >> base;
    for(int i = 1; i < base + 1; i++)
    {
        cout << i * base << endl;
    }
}