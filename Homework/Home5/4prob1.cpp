#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Input a number and I'll tell you whether it is a prime number or not: ";
    cin >> number;
    bool isPrime = false;
    for(int i = 1; i <= number; i++)
    {
        if(number % i != 0 || i == 1)
        {
            isPrime =  true;
        }
    }
    if(isPrime == true)
    {
        cout << "Your number is prime!" << endl;
    }
    else
    {
        cout << "Your number is not prime..." << endl;
    }
}