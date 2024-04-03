#include <iostream>

using namespace std;

int main()
{
    string order;
    cout << "Enter 10 numbers and I will tell you if its ascending, descending, or its shuffled" << endl;
    cout << "Please enter your sequence of numbers: ";
    getline(cin, order);
    bool numberStop = false;
    bool recordNumber = true;
    bool ascending = false;
    bool descending = false;
    bool shuffle = true;
    string tempNumber1 = "";
    string tempNumber2 = "";
    for(int i = 0; i <= order.length(); i++)
    {
        if(order[i] == ' ' || order[i] == ',')
        {
            numberStop = true;
            recordNumber = false;
        }
        else if(order[i] != ' ' || order[i] != ',')
        {
            numberStop = false;
            recordNumber = true;
            if(tempNumber1 > tempNumber2)
            {
                if(tempNumber1 > tempNumber2)
                {
                    descending = true;
                    ascending = false;
                }
                else
                {
                    shuffle = true;
                }
                tempNumber2 = tempNumber1;
            }
            else if(tempNumber1 < tempNumber2)
            {
                if(tempNumber1 < tempNumber2)
                {
                    ascending = true;
                    descending = false;
                }
                else
                {
                    shuffle = true;
                }
                tempNumber2 = tempNumber1;
            }
        }
        if(recordNumber == true)
        {
            tempNumber1 += order[i];
        }
    }
    if(ascending == true)
    {
        cout << "The order is ascending!" << endl;
    }
    else if(descending == true)
    {
        cout << "The order is descending!" << endl;
    }
    else if(shuffle == true)
    {
        cout << "The order is shuffled!" << endl;
    }
}