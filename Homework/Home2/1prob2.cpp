#include <iostream>

using namespace std;

int main()
{
    int unit;
    cout << "Hello! I can tell you how much you are being charge for electricity! First tell me how many units you used: ";
    cin >> unit;
    if(unit < 100 || unit == 100)
    {
        double unitA = unit * 0.12;
        cout << "You spent " << unitA << "$ on electricity!" << endl;
    }
    else if(unit > 100)
    {
        double unitB = unit * 0.15;
        cout << "You spent " << unitB << "$ on electricity!" << endl;
    }
}