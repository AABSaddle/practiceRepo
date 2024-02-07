#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Hello! I can tell if a number is greater than 10! Tell me a number: ";
    cin >> num;
    if(num > 10)
    {
        cout << "Its greater than 10!" << endl;
    }
    else
    {
        cout << "Its not greater than 10!" << endl;
    }
}