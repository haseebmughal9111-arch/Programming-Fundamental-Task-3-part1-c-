#include <iostream>
using namespace std;

int calculateLowest(int numbers[], int size)
{
    int lowest = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }

    return lowest;
}

int calculateHighest(int numbers[], int size)
{
    int highest = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > highest)
        {
            highest = numbers[i];
        }
    }

    return highest;
}

int main()
{
    int size;

    cout << "Enter number of students: ";
    cin >> size;

    int numbers[100];

    cout << "Enter marks:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Lowest Score: " << calculateLowest(numbers, size) << endl;
    cout << "Highest Score: " << calculateHighest(numbers, size);

    return 0;
}
