#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Hello! I can change the first and last character of a text to a S! Tell me something: ";
    getline(cin, text);
    text[0] = 'S';
    text[text.length() - 1] = 'S';
    cout << "I have changed your word to " << text << endl;
}