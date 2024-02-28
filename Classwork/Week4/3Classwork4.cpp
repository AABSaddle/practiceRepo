#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Hello! I can tell you the length of a text! Tell me something? ";
    getline(cin, text);
    int textLen = text.length();
    cout << "You inputed " << text << " and its length is " << textLen << endl;
}