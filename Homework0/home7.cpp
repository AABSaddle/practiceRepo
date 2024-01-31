#include <iostream>

using namespace std;

int main()
{
    int fah;
    cout << "Whats the weather in fahrenheit: ";
    cin >> fah;
    int cel = (5 * (fah - 32)) / 9;
    cout << cel << endl;
}