#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int number;
    cout << "Hello! I can tell you the 6 numbers you input and display the absolute value or all of them combine! Tell me a number: ";
    cin >> number;
    if(number < 0)
    {
        int pos = number - (number * 2);
        sum += pos;
    }
    else
    {
        sum += number;
    }
    for(int i = 1; i <= 5; i++)
    {
        if(number < 0)
        {
            int posNumber = number - (number * 2);
            sum += posNumber;
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
    cout << "The absolute value of all numbers are " << sum << endl;
}