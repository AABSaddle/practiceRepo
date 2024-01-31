#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "I can swap the values of two things, whats a: ";
    cin >> a;
    int b;
    cout << "Whats b: ";
    cin >> b;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << a << " and " << b << endl;
}