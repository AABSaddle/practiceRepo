#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int rad;
    cout << "What is the radius of the circle: ";
    cin >> rad;
    double sum = (4 * M_PI * pow(rad, 3)) / 3;
    cout << sum << endl;
}