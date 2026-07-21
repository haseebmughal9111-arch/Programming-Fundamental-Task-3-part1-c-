#include <iostream>
using namespace std;

int calculatePower(int base, int exponent)
{
    int answer = 1;

    for (int i = 1; i <= exponent; i++)
    {
        answer = answer * base;
    }

    return answer;
}

int main()
{
    int base, exponent;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    int result = calculatePower(base, exponent);

    cout << base << " raised to the power "
         << exponent << " is: " << result;

    return 0;
}
