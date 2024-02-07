#include <iostream>

using namespace std;

int main()
{
    char asc;
    cout << "Hello! I can show the letters you type as their ASCII value! Try it: ";
    cin >> asc;
    int fin = int(asc);
    cout << fin << endl;
}