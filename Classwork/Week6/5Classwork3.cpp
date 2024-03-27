#include <iostream>

using namespace std;

int main()
{
    string word;
    cout << "Please input a word: ";
    cin >> word;
    string revWord;
    for(int i = 0; i <= word.length(); i++)
    {
        revWord = word[i] + revWord;
    }
    cout << "The word you chose is now " << revWord << endl;
}