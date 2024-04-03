#include <iostream>

using namespace std;

int main()
{
    int howLong;
    cout << "I am Fibby the fibonacci sequencer, i will tell you the order of the fibunanchi sequence for as long as you inputed." << endl;
    cout << "Tell me how long you would like the sequence to be: ";
    cin >> howLong;
    int part1 = 0;
    int part2 = 1;
    int partFin = 0;
    cout << "Fibonnaci Sequence: ";
    for(int i = 1; i <= howLong; i++)
    {
        if(i == 1)
        {
            cout << part1 << ", ";
            continue;
        }

        if(i == 2)
        {
            cout << part2 << ", ";
            continue;
        }

        partFin = part1 + part2;
        part1 = part2;
        part2 = partFin;
        cout << partFin << ", ";
    }
}