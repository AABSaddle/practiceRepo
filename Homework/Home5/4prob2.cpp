#include <iostream>

using namespace std;

int main()
{
    string statement;
    cout << "Please enter a sentence and I will count how many uppercase and lowercase, numbers and blank spaces!: ";
    getline(cin, statement);
    int upperCounter = 0;
    int lowerCounter = 0;
    int numberCounter = 0;
    int blankCounter = 0;
    for(int i = 0; i <= statement.length(); i++)
    {
        if(statement[i] >= 'A' && statement[i] <= 'Z')
        {
            upperCounter++;
        }
        else if(statement[i] >= 'a' && statement[i] <= 'z')
        {
            lowerCounter++;
        }
        else if(statement[i] >= '0' && statement[i] <= '9')
        {
            numberCounter++;
        }
        else if(statement[i] == ' ')
        {
            blankCounter++;
        }
    }
    cout << "You inputed '" << statement << "' you inputted " << upperCounter << " uppercase letters, " << lowerCounter << " lowercase letters, " << numberCounter << " numbers used, and " << blankCounter << " was blank spaces" << endl;
}