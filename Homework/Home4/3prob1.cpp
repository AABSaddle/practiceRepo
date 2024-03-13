#include <iostream>

using namespace std;

int main()
{
    int divi3;
    int divi5;
    int nondivi;
    int number;
    cout << "Hello! I can tell you if the 20 numbers you input is divisble by 3 and 5! Tell me a number: ";
    cin >> number;
    if(number % 3 == 0)
    {
        divi3 += 1;
    }
    else if(number % 5 == 0)
    {
        divi5 += 1;
    }
    else if(number % 3 != 0 && number % 5 != 0)
    {
        nondivi += 1;
    }
    for(int i = 1; i <= 19; i++)
    {
        if(number % 3 == 0)
        {
            divi3 += 1;
            cout << "Tell me your next number: ";
            cin >> number;
        }
        else if(number % 5 == 0)
        {
            divi5 += 1;
            cout << "Tell me your next number: ";
            cin >> number;
        }
        else if(number % 3 != 0 && number % 5 != 0)
        {
            nondivi += 1;
            cout << "Tell me your next number: ";
            cin >> number;
        }
    }
    if(divi3 > divi5 && divi3 > nondivi)
    {
        cout << "You input more numbers divisible by 3 than 5." << endl;
    }
    else if(divi5 > divi3 && divi5 > nondivi)
    {
        cout << "You input more numbers divisible by 5 than 3." << endl;
    }
    else if(nondivi > divi3 && nondivi > divi5)
    {
        cout << "You input more numbers not divisible by 3 and 5." << endl;
    }
}