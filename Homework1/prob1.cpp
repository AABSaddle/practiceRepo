#include <iostream>

using namespace std;

int main()
{
    double base;
    double height;
    cout << "Hello! I can tell you the area of a triangle! First tell me the base: ";
    cin >> base;
    cout << "Now tell me the height: ";
    cin >> height;
    double sum = (base * height) / 2;
    cout << sum << endl;
}