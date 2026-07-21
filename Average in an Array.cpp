#include <iostream>
#include <iomanip>
using namespace std;

double calculateAverage(int marks[], int totalStudents)
{
    int sum = 0;

    for (int i = 0; i < totalStudents; i++)
    {
        sum = sum + marks[i];
    }

    return (double)sum / totalStudents;
}

int main()
{
    int totalStudents;

    cout << "Enter number of students: ";
    cin >> totalStudents;

    int marks[100];

    cout << "Enter student marks:\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cin >> marks[i];
    }

    double average = calculateAverage(marks, totalStudents);

    cout << fixed << setprecision(2);
    cout << "Average Score: " << average;

    return 0;
}
