#include <iostream>

using namespace std;

int main()
{
    int letterCounter = 0;
    string word;
    char occurence;
    cout << "Please input a word: ";
    cin >> word;
    cout << "Please input a letter: ";
    cin >> occurence;
    for(int i = 0; i <= word.length(); i++)
    {
        if(word[i] == occurence)
        {
            letterCounter += 1;
        }
    }
    cout << occurence << " appeared " << letterCounter << " times" << endl;
}