#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Hello! I can tell you whether you are a child, teen, adult or senior! First tell me your age: ";
    cin >> age;
    if(age < 12 || age == 12)
    {
        cout << "You are " << age << " and you are a child!" << endl;
    }
    else if(age > 13 && age < 19 || age == 19)
    {
        cout << "You are " << age << " and you are a teen!" << endl;
    }
    else if(age > 20 && age < 64 || age == 64)
    {
        cout << "You are " << age << " and you are a adult!" << endl;
    }
    else if(age > 65)
    {
        cout << "You are " << age << " and you are a senior!" << endl;
    }
}