#include <iostream>

using namespace std;

int main()
{
    int menu;
    cout << "Hello, I am Mandy the handy calculator, below are the options for calculations \n" ;
    cout << "1. Addition \n";  
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";
    cout << "Please input what you desire: ";
    cin >> menu;
    switch(menu)
    {
        case 1:
            int numAdd;
            cout << "How many numbers are you adding: ";
            cin >> numAdd;
            if(numAdd == 2)
            {
                int num1;
                int num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                int sumAdd = num1 + num2;
                cout << "The sum of " << num1 << " and " << num2 << " is " << sumAdd << endl;
                break;
            }
            else if(numAdd == 3)
            {
                int num1; 
                int num2; 
                int num3;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                int sumAdd = num1 + num2 + num3;
                cout << "The sum of " << num1 << " , " << num2 << " and " << num3 << " is " << sumAdd << endl;
                break;
            }
            else if(numAdd == 4)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                int sumAdd = num1 + num2 + num3 + num4;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " and " << num4 << " is " << sumAdd << endl;
                break;
            }
            else if(numAdd == 5)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                int num5;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                cout << "Fifth number: ";
                cin >> num5;
                int sumAdd = num1 + num2 + num3 + num4 + num5;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " , " << num4 << " and " << num5 << " is " << sumAdd << endl;
                break;
            }
            break;
        case 2:
            int numSub;
            cout << "How many numbers are you subtracting: ";
            cin >> numSub;
            if(numSub == 2)
            {
                int num1;
                int num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                int sumSub = num1 - num2;
                cout << "The sum of " << num1 << " and " << num2 << " is " << sumSub << endl;
                break;
            }
            else if(numSub == 3)
            {
                int num1; 
                int num2; 
                int num3;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                int sumSub = num1 - num2 - num3;
                cout << "The sum of " << num1 << " , " << num2 << " and " << num3 << " is " << sumSub << endl;
                break;
            }
            else if(numSub == 4)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                int sumSub = num1 - num2 - num3 - num4;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " and " << num4 << " is " << sumSub << endl;
                break;
            }
            else if(numSub == 5)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                int num5;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                cout << "Fifth number: ";
                cin >> num5;
                int sumSub = num1 - num2 - num3 - num4 - num5;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " , " << num4 << " and " << num5 << " is " << sumSub << endl;
                break;
            }
            break;
        case 3:
            int numMult;
            cout << "How many numbers are you multiplying: ";
            cin >> numMult;
            if(numMult == 2)
            {
                int num1;
                int num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                int sumMult = num1 * num2;
                cout << "The sum of " << num1 << " and " << num2 << " is " << sumMult << endl;
                break;
            }
            else if(numMult == 3)
            {
                int num1; 
                int num2; 
                int num3;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                int sumMult = num1 * num2 * num3;
                cout << "The sum of " << num1 << " , " << num2 << " and " << num3 << " is " << sumMult << endl;
                break;
            }
            else if(numMult == 4)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                int sumMult = num1 * num2 * num3 * num4;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " and " << num4 << " is " << sumMult << endl;
                break;
            }
            else if(numMult == 5)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                int num5;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                cout << "Fifth number: ";
                cin >> num5;
                int sumMult = num1 * num2 * num3 * num4 * num5;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " , " << num4 << " and " << num5 << " is " << sumMult << endl;
                break;
            }
            break;
        case 4:
            int numDivi;
            cout << "How many numbers are you dividing: ";
            cin >> numDivi;
            if(numDivi == 2)
            {
                int num1;
                int num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                int sumDivi = num1 / num2;
                cout << "The sum of " << num1 << " and " << num2 << " is " << sumDivi << endl;
                break;
            }
            else if(numDivi == 3)
            {
                int num1; 
                int num2; 
                int num3;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                int sumDivi = num1 / num2 / num3;
                cout << "The sum of " << num1 << " , " << num2 << " and " << num3 << " is " << sumDivi << endl;
                break;
            }
            else if(numDivi == 4)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                int sumDivi = num1 / num2 / num3 / num4;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " and " << num4 << " is " << sumDivi << endl;
                break;
            }
            else if(numDivi == 5)
            {
                int num1; 
                int num2; 
                int num3;
                int num4;
                int num5;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Second number: ";
                cin >> num2;
                cout << "Third number: ";
                cin >> num3;
                cout << "Fourth number: ";
                cin >> num4;
                cout << "Fifth number: ";
                cin >> num5;
                int sumDivi = num1 / num2 / num3 / num4 / num5;
                cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " , " << num4 << " and " << num5 << " is " << sumDivi << endl;
                break;
            }
            break;
        default:
            cout << "That is not a option, goodbye" << endl;
            break;
    }
}