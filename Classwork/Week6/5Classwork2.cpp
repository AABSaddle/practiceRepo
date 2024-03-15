#include <iostream>

using namespace std;

int main()
{
    string word;
    char occurence;
    char replace;
    cout << "Please input a word: ";
    cin >> word;
    cout << "Please input a letter that will be replaced: ";
    cin >> occurence;
    cout << "Please input a letter that will replace the letter you chose previously: ";
    cin >> replace;
    for(int i = 0; i <= word.length(); i++)
    {
        if(word[i] == occurence)
        {
            word[i] = replace;
        }
    }
    cout << "You chose to replace" << occurence << " with " << replace << " the word is now " << word << endl;
}