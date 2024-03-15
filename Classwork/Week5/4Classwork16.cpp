#include <iostream>

using namespace std;

int main()
{
    int posNum = 0;
    int number;
    for(;;)
    {
        cout << "Give me a positive number: ";
        cin >> number;
        if(number < 0)
        {
            break;
        }
        else if(number > 0 || number == 0)
        {
            posNum += 1;
        }
    }
    cout << "You inputed a negative number, you inputed positive numbers " << posNum << " times." << endl; 
}