#include <iostream>

using namespace std;

int main()
{
    string inputNumbers;
    string lowestNumber = "";
    cout << "Hello, tell me a string of numbers and i will out put the two smallest numbers, try: ";
    cin >> inputNumbers;
    for(int i = 0; i <= inputNumbers.length(); i++)
    {
        if(inputNumbers[i] < inputNumbers[i+1])
        {
            lowestNumber += inputNumbers[i];
        }
        else
        {

        }
    }
    cout << lowestNumber << endl;
}