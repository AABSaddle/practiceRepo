#include <iostream>

using namespace std;

int main()
{
    int select;
    int a = 5;
    int b = 7;
    int c = 12;
    int m = 15;
    int g = 6;
    cout << "Hello! Welcome to the store! please type the number corresponding to the item. 1. Apples, 2. Bananas, 3. Cookies, 4. Milk, 5. Grapes : ";
    cin >> select;
    if(select == 1)
    {
        double sum = (a * 9) / 100 + a;
        cout << sum << endl;
    }
    else if(select == 2)
    {
        double sum = (b * 9) / 100 + b;
        cout << sum << endl;
    }
    else if(select == 3)
    {
        double sum = (c * 9) / 100 + c;
        cout << sum << endl;
    }
    else if(select == 4)
    {
        double sum = (m * 9) / 100 + m;
        cout << sum << endl;
    }
    else if(select == 5)
    {
        double sum = (g * 9) / 100 + g;
        cout << sum << endl;
    }
}