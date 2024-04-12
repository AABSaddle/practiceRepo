#include <iostream>

using namespace std;

int main()
{
    int numStudents;
    cout << "Hello, I am a program that averages your students grades, please tell me how many students you have: ";
    cin >> numStudents;
    for(int i = 1; i <= numStudents; i++)
    {
        int initialGrade;
        int totalGrade = 0;
        int numCourses;
        cout << "Please tell me how many courses the student is taking: ";
        cin >> numCourses;
        for(int j = 1; j <= numCourses; j++)
        {
            cout << "What is their grade in course " << j << ": ";
            cin >> initialGrade;
            totalGrade += initialInput;
        }
        float finalGrade = totalGrade / numCourses;
        cout << "Your " << i << " student average is " << finalGrade << endl;;
    }
}