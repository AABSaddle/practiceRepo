#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Hello! I can classify your number by five criteria! Tell me a number: ";
    cin >> number;
    if(number > 0)
    {
        if(number % 2 != 0)
        {
            cout << "You entered " << number << ", its classification is positive and odd" << endl;
        }
        else
        {
            cout << "You entered " << number << ", its classification is positive and even" << endl;
        }
    }
    else if(number == 0)
    {
        cout << "You entered " << number << ", its classification is zero it can never be positive or negative" << endl;
    }
    else if(number < 0)
    {
        if(number % 2 != 0)
        {
            cout << "You entered " << number << ", its classification is negative and odd" << endl;
        }
        else
        {
            cout << "You entered " << number << ", its classification is negative and even" << endl;
        }
    }
}