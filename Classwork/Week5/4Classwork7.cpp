#include <iostream>

using namespace std;

int main()
{
    string password = "Dante";
    string attempt;
    cout << "Hello you are tasked to enter the correct password, you have 10 attempts" << endl;
    cout << "PASSWORD: ";
    cin >> attempt;
    for(int i = 1; i <= 10; i++)
    {
       if(attempt != password)
       {
        string attempt;
        cout << "PASSWORD: ";
        cin >> attempt;
       }
       else
       {
        cout << "You did it, you get nothing" << endl;
       }
    }
}