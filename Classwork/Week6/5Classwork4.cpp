#include <iostream>

using namespace std;

int main()
{
    string word;
    cout << "Please input a word and ill see if its a palindrome: ";
    getline(cin, word);
    bool pali = true;
    for(int i = 0, j = word.length() - 1; i < j; i++, j--)
    {
        if(word[i] != word[j])
        {
            pali = false;
            break;
        }
    }
    if(pali == true)
    {
        cout << "That is a palindrome!" << endl;
    }
    else
    {
        cout << "That is not a palindrome..." << endl;
    }
}