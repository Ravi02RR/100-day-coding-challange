#include <iostream>
using namespace std;
void PrintArray()
{
}

int main()
{
    // declare
    int number[15];

    cout << "value at zero index  " << number[0] << endl;

    cout << "array fromed" << endl;

    // array
    int second[3] = {5, 7, 11};
    cout << second[2] << endl;

    for (int i = 0; i <= 3; i++)
    {
        cout << "value of array are" << second[i] << endl;
    }

    return 0;
}