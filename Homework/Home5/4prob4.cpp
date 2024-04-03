#include <iostream>

using namespace std;

int main()
{
    string order;
    cout << "Enter a sequence of numbers and I will tell you if its ascending, descending, or its shuffled" << endl;
    cout << "Please enter your sequence of numbers with commas: ";
    cin >> order;
    bool numberStop = false;
    bool recordNumber = true;
    bool ascending = false;
    bool descending = false;
    bool shuffle = true;
    int tempNumber1 = 0;
    int tempNumber2 = 0;
    for(int i = 0; i <= order.length(); i++)
    {
        if(order[i] == ' ' || order[i] == ',')
        {
            numberStop = true;
            recordNumber = false;
        }
        if(order[i] != ' ' || order[i] != ',')
        {
            numberStop = false;
            recordNumber = true;
            if(tempNumber1 >= tempNumber2)
            {
                if(tempNumber1 >= tempNumber2)
                {
                    shuffle = false;
                    ascending = true;
                }
                else
                {
                    shuffle = true;
                }
                tempNumber2 = tempNumber1;
            }
            else if(tempNumber1 <= tempNumber2)
            {
                if(tempNumber1 <= tempNumber2)
                {
                    shuffle = false;
                    descending = true;
                }
                else
                {
                    shuffle = true;
                }
                tempNumber2 = tempNumber1;
            }
        }
        if(recordNumber)
        {
            tempNumber1 += order[i];
        }
    }
    if(ascending)
    {
        cout << "The order is ascending!" << endl;
    }
    else if(descending)
    {
        cout << "The order is descending!" << endl;
    }
    else if(shuffle)
    {
        cout << "The order is shuffled!" << endl;
    }
}