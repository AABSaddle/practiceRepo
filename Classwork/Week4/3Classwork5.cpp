#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Hello! I can tell you the first, second, and last characters of a text! Tell me something: ";
    getline(cin, text);
    cout << "The first character is " << text[0] << " , the second is " << text[1] << ", and the last character is " << text[text.length() - 1] << endl;
}