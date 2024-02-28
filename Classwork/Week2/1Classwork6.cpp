#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Hello! I can tell you if the number is positive negative or zero! Tell me a number: ";
    cin >> num;
    if(num > 0)
    {
        cout << "Its positive!" << endl;
    }
    else if(num == 0)
    {
        cout << "Its a zero!" << endl;
    }
    else if(num < 0)
    {
        cout << "Its a negative!" << endl;
    }
}