#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number and i can find the factorial! Tell me a number: ";
    cin >> num;
    int fact = 1;
    if(num == 1)
    {
        cout << "Thats just a one!" << endl;
    }
    else
    {
        for(int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
}