#include <iostream>

using namespace std;

int main()
{
    string name1;
    cout << "Hello! I can combine words that you type! What is your first word? ";
    cin >> name1;
    string name2;
    cout << "What is your second word? ";
    cin >> name2;
    string finName = name1 + name2;
    cout << finName << endl;
}
