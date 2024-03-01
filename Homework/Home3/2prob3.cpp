#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "Hello! I can tell you the month based on the numbers that correspond to it! Tell me the corresponding number for a month: ";
    cin >> month;
    switch(month)
    {
        case 1:
            cout << "That number corresponds to January!" << endl;
            break;
        case 2:
            cout << "That number corresponds to February!" << endl;
            break;
        case 3:
            cout << "That number corresponds to March!" << endl;
            break;
        case 4:
            cout << "That number corresponds to April!" << endl;
            break;
        case 5:
            cout << "That number corresponds to May!" << endl;
            break;
        case 6:
            cout << "That number corresponds to June!" << endl;
            break;
        case 7:
            cout << "That number corresponds to July!" << endl;
            break;
        case 8:
            cout << "That number corresponds to August!" << endl;
            break;
        case 9:
            cout << "That number corresponds to September!" << endl;
            break;
        case 10:
            cout << "That number corresponds to October!" << endl;
            break;
        case 11:
            cout << "That number corresponds to November!" << endl;
            break;
        case 12:
            cout << "That number corresponds to December!" << endl;
            break;
        default:
            cout << "That number does not correspond with a month" << endl;
            break;
    }
}