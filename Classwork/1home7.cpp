#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Hello! I can tell you the day of the week that correspond! Tell me a number: ";
    cin >> day;
    if(day == 1)
    {
        cout << "Its Monday..." << endl;
    }
    else if(day == 2)
    {
        cout << "Its Tuesday!" << endl;
    }
    else if(day == 3)
    {
        cout << "Its Wednesday!" << endl;
    }
    else if(day == 4)
    {
        cout << "Its Thursday!" << endl;
    }
    else if(day == 5)
    {
        cout << "Its Friday!" << endl;
    }
    else if(day == 6)
    {
        cout << "Its Saturday!" << endl;
    }
    else if(day == 7)
    {
        cout << "Its Sunday..." << endl;
    }
    else if(day > 7)
    {
        cout << "Im sorry thats not a day" << endl;
    }
}