#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "Hello! I can tell you how many days are in a certain month! Tell me the corresponding number for the month: ";
    cin >> month;
    switch(month)
    {
        case 1:
            cout << "January has 31 days!" << endl;
            break;
        case 2:
            cout << "February has 28 days! but every four years it gets an additional day!" << endl;
            break;
        case 3:
            cout << "March has 31 days!" << endl;
            break;
        case 4:
            cout << "April has 30 days!" << endl;
            break;
        case 5:
            cout << "May has 31 days!" << endl;
            break;
        case 6:
            cout << "June has 30 days!" << endl;
            break;
        case 7:
            cout << "July has 31 days!" << endl;
            break;
        case 8:
            cout << "August has 31 days!" << endl;
            break;
        case 9:
            cout << "September has 30 days!" << endl;
            break;
        case 10:
            cout << "October has 31 days!" << endl;
            break;
        case 11:
            cout << "November has 31 days!" << endl;
            break;
        case 12:
            cout << "December has 31 days!" << endl;
            break;
        default:
            cout << "That does not correspond with a month" << endl;
            break;
    }
}