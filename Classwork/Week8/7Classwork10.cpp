#include <iostream>

using namespace std;

int main()
{
    string word;
    cout << "Hello, I am a program that elminates duplicate letters, try me: ";
    cin >> word;
    for(int i = 0, j = word.length() - 1; i <= word.length() && j >= 0; i++, j--)
    {
        if(word[i] == word[j])
        {
            word[j] = ' ';
        }
    }
    cout << "Your word is now " << word << endl;
}