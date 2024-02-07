#include <iostream>

using namespace std;

int main()
{
    char word;
    cout << "Hello! I can tell if a letter is a vowel or a consonant! Tell me a letter: ";
    cin >> word;
    if(word == 'a' || word == 'A' || word == 'e' || word == 'E' || word == 'i' || word == 'I' || word == 'o' || word == 'O' || word == 'u' || word == 'U')
    {
        cout << "Its a vowel!" << endl;
    }
    else
    {
        cout << "Its a consonant!" << endl;
    }
}