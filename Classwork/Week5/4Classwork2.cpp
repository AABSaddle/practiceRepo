#include <iostream>

using namespace std;

int main()
{
    int base;
    cout << "Enter a number and i can multiply it 10 times! Tell me a number: ";
    cin >> base;
    for(int i = 1; i <= 10; i++)
    {
        cout << i * base << endl;
    }
}