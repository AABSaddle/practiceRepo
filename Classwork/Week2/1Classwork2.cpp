#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Hello! I can tell if a number is 20! Tell me a number: ";
    cin >> num;
    if(num == 20)
    {
        cout << "Great!" << endl;
    }
    else
    {
        cout << "Not great!" << endl;
    }
}