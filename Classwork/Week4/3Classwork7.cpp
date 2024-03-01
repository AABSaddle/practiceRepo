#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Hello! I can tell you your first and last name! Tell me your full name: ";
    getline(cin, text);
    cout << "Your full name is " << text << endl;
}