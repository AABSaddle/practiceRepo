#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;
    float num3;
    cout << "Hello! I can give you the average of three numbers! Tell me the first number: ";
    cin >> num1;
    cout << "Tell me the second number: ";
    cin >> num2;
    cout << "Now finally tell me the first number: ";
    cin >> num3;
    double average = (num1 + num2 + num3) / 3;
    cout << average << endl;
}
