#include <iostream>

using namespace std;

int main()
{
    int order;
    cout << "Hello sir/madam, I will be serving you tonight, on the menu tonight we have 1. Soup, 2. Chicken, 3. Fish, 4. Burger, 5. Bread. What would you like to order? ";
    cin >> order;
    switch(order)
    {
        case 1:
            cout << "That'll be 10 dollars" << endl;
            break;
        case 2:
            cout << "That'll be 20 dollars" << endl;
            break;
        case 3:
            cout << "That'll be 30 dollars" << endl;
            break;
        case 4:
            cout << "That'll be 25 dollars" << endl;
            break;
        case 5:
            cout << "That'll be 39 dollars" << endl;
            break;
        default:
            cout << "That is not on the menu" << endl;
            break;
    }
}