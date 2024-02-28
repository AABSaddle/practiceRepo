#include <iostream>

using namespace std;

int main()
{
    int range;
    cout << "Hello! I can tell you what letter grade you have when you tell me your numeric grade! Tell me if you are in 1. 90+, 2. 80-90, 3. 70-80, 4. 60-70, 5. 60-: ";
    cin >> range;
    switch(month)
    {
        case 1:
            cout << "You have a A!" << endl;
            break;
        case 2:
            cout << "You have a B!" << endl;
            break;
        case 3:
            cout << "You have a C!" << endl;
            break;
        case 4:
            cout << "You have a D.." << endl;
            break;
        case 5:
            cout << "You have a F..." << endl;
            break;
        default:
            cout << "That does not correspond with a range" << endl;
            break;
    }
}