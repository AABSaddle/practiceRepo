#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Hello! I can show you what happens when 2 ints are added, 2 strings are added, and when 1 int and 1 string are added! First tell me 2 numbers: ";
    cin >> num1;
    int num2;
    cout << "Tell me the second number: ";
    cin >> num2;
    string name1;
    cout << "Now what is your first word? ";
    cin >> name1;
    string name2;
    cout << "What is your second word? ";
    cin >> name2;
    int finNum = num1 + num2;
    string finName = name1 + name2;
    cout << finNum << endl;
    cout << finName << endl;
    cout << "1 int and 1 string can not be added, it will cause an error!" << endl;
}