#include <iostream>

using namespace std;

int main()
{
    int number;
    int subNum = 0;
    int lowNum = 0;
    int secLowNum = 0;
    int midNum = 0;
    int secHighNum = 0;
    int highNum = 0;
    for(int i = 1; i <= 5; i++)
    {
        cout << "Give me a number: ";
        cin >> number;
        if(number > subNum)
        {
            subNum = number;
            if(highNum < number)
            {
                highNum = number;
            }
            else if(highNum >= number)
            {
                secHighNum = number;
            }
        }
        else if(number >= subNum || number <= subNum)
        {
            subNum = number;
            if(midNum < number)
            {
                midNum = number;
            }
        }
        else if(number < subNum)
        {
            subNum = number;
            if(lowNum < number)
            {
                lowNum = number;
            }
            else if(lowNum >= number)
            {
                secLowNum = number;
            }
        }
    }
    cout << lowNum << secLowNum << midNum << secHighNum << highNum << endl; 
}