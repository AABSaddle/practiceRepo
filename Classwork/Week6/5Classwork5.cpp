#include <iostream>

using namespace std;

int main()
{
    string word;
    cout << "Please input a word: ";
    getline(cin, word);
    int count = 0;
    for(int i = 0; i < word.length(); i++)
    {
        if(word[i] == ',' || word[i] == '.' || word[i] == '!' || word[i] == '?' || word[i] == '&' || word[i] == ';' || word[i] == ':' || word[i] == ' ')
        {
            count = count + 0;
        }
        else
        {
            count = count + 1;
        }
    }
    cout << count << endl;
}