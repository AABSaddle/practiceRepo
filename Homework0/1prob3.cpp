#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Hello! I can tell you the day if its a weekday or a weekend based off the numbers 1-7! First tell me the number: ";
    cin >> day;
    if(day == 1 || day == 2 || day == 3 || day == 4 || day == 5)
    {
        cout << "Its the weekday..." << endl;
    }
    else if(day == 6 || day == 7)
    {
        cout << "Its the weekend!!!" << endl;
    }
}