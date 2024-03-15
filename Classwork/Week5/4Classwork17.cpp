#include <iostream>

using namespace std;

int main()
{
    int sumNum = 0;
    int totalNum = 0;
    int number;
    for(;;)
    {
        cout << "Give me a number(to exit input 0): ";
        cin >> number;
        if(number == 0)
        {
            break;
        }
        else
        {
            totalNum++;
            sumNum += number;
        }
    }
    cout << "You inputed a number " << totalNum << " times and the total is " << sumNum << endl; 
}