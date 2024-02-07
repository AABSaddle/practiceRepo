#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;
    float num3;
    cout << "Hello! I can tell you which of three numbers is the largest! Tell me the first number: ";
    cin >> num1;
    cout << "Tell me the second number: ";
    cin >> num2;
    cout << "Now finally tell me the first number: ";
    cin >> num3;
    if(num1 > num2 && num1 > num3)
    {
        cout << num1 << endl;
    }
    else if(num2 > num1 && num2 > num3)
    {
        cout << num2 << endl;
    }
    else if(num3 > num1 && num3 > num1)
    {
        cout << num3 << endl;
    }
}