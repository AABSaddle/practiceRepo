#include <iostream>

using namespace std;

int main()
{
    string names;
    cout << "Please input a list names and i will print out the name that comes first in the alphabet: ";
    getline(cin, names);
    string first = "";
    bool recordName = true;
    bool nameEnd = false;
    for(int i = 0; i < names.length(); i++)
    {
        if(names[i] == ' ')
        {
            recordName = false;
            nameEnd = true;
        }
        if(nameEnd && names[i] != ' ')
        {
            nameEnd = false;
            if(names[i] < first[0])
            {
                first = "";
                recordName = true;
            }
        }
        if(recordName)
        {
            first += names[i];
        }
    }
    cout << first << endl;
}