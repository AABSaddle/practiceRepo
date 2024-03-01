#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string shape;
    cout << "Hello! I am called STaCy! I can help you calculate the area or perimeter of a square, triangle, or circle! Which shape am I calculating: ";
    cin >> shape;
    string formula;
    cout << "Now tell me if you want to calculate the area or perimeter: ";
    cin >> formula;
    if(shape == "square" || shape == "Square")
    {
        if(formula == "perimeter" || formula == "Perimeter")
        {
            int side;
            cout << "What is the square side: ";
            cin >> side;
            int squarePeri = 4 * side;
            cout << "The perimeter of the square is " << squarePeri << endl;
        }
        else if(formula == "area" || formula == "Area")
        {
            int side;
            cout << "What is the square side: ";
            cin >> side;
            int squareArea = side * side;
            cout << "The area of the square is " << squareArea << endl;
        }
    }
    else if(shape == "triangle" || shape == "Triangle")
    {
        if(formula == "perimeter" || formula == "Perimeter")
        {
            int side1;
            cout << "What is first side of the triangle: ";
            cin >> side1;
            int base;
            cout << "What is the base of the triangle: ";
            cin >> base;
            int side2;
            cout << "What is the second side of the triangle: ";
            int trianglePeri = side1 + base + side2;
            cout << "The perimeter of the triangle is " << trianglePeri << endl;
        }
        else if(formula == "area" || formula == "Area")
        {
            int height;
            cout << "What is the height of the triangle: ";
            cin >> height;
            int base;
            cout << "What is the base of the triangle: ";
            cin >> base;
            double triangleArea = (base * height) / 2;
            cout << "The area of the triangle is " << triangleArea << endl;
        }
    }
    else if(shape == "circle" || shape == "Circle")
    {
        if(formula == "perimeter" || formula == "Perimeter")
        {
            int radius;
            cout << "What is the radius of the circle: ";
            cin >> radius;
            double circlePeri = 2 * M_PI * radius;
            cout << "The perimeter of the circle is " << circlePeri << endl;
        }
        else if(formula == "area" || formula == "Area")
        {
            int radius;
            cout << "What is the radius of the circle: ";
            cin >> radius;
            double circleArea = M_PI * (radius * radius);
            cout << "The area of the circle is " << circleArea << endl;
        }
    }
}