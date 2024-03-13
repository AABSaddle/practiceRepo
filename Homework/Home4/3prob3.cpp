#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int number;
    cout << "Hello! Input 5 numbers and I can pinpoint and add numbers that are positive! Tell me a number: ";
    cin >> number;
    if(number < 0)
    {

    }
    else
    {
        sum += number;
    }
    for(int i = 1; i <= 4; i++)
    {
        if(number < 0)
        {
            cout << "Tell me your next number: ";
            cin >> number;
        }
        else
        {
            sum += number;
            cout << "Tell me your next number: ";
            cin >> number;
        }
    }
    cout << "The total of all positive numbers are " << sum << endl;
}