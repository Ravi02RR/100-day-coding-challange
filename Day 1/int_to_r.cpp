// my solution
// reference  https://www.w3resource.com/cpp-exercises/math/cpp-math-exercise-18.php

#include <iostream>
using namespace std;
#include <string>

string intToRoman(int num)
{
    const int main[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string sign[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string roman = "";
    cout << sizeof(main);

    for (int i = 0; i < sizeof(main); i++)
    {
        while (num >= main[i])
        {
            num = num - main[i];
            roman = roman + sign[i];
        }
    }

    return roman;
}

int main()
{
    int num;
    cout << "enter your number";
    cin >> num;

    string roman = intToRoman(num);
    cout << "your number  in roman is " << roman << endl;

    return 0;
}