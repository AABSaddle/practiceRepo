#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Hello! I can tell you if a number is odd or even! Tell me the number: ";
    cin >> num;
    if(num % 2 == 0)
    {
        cout << "Its even!" << endl;
    }
    else if(num % 2 != 0)
    {
        cout << "Its odd!" << endl;
    }
}