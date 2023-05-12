// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

// #include <iostream>
// using namespace std;

// class Solution
// {
// public:
//     int value(char i)
//     {
//         if (i == 'I')
//         {
//             return 1;
//         }
//         if (i == 'V')
//         {
//             return 5;
//         }
//         if (i == 'X')
//         {
//             return 10;
//         }
//         if (i == 'L')
//         {
//             return 50;
//         }
//         if (i == 'C')
//         {
//             return 100;
//         }
//         if (i == 'D')
//         {
//             return 500;
//         }
//         if (i == 'M')
//         {
//             return 1000;
//         }
//     }
// };
// int main()
// {
//     Solution s;
//     cout << s.value('I') << endl;
//     cout << s.value('V') << endl;
//     cout << s.value('X') << endl;

//     return 0;
// }

// friend's solution

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V')
            {
                count = count + 4;
                ++i;
            }
            else if (s[i + 1] == 'X')
            {
                count = count + 9;
                ++i;
            }
            else
                count = count + 1;
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L')
            {
                count = count + 40;
                ++i;
            }
            else if (s[i + 1] == 'C')
            {
                count = count + 90;
                ++i;
            }
            else
                count = count + 10;
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D')
            {
                count = count + 400;
                ++i;
            }
            else if (s[i + 1] == 'M')
            {
                count = count + 900;
                ++i;
            }
            else
                count = count + 100;
        }
        else if (s[i] == 'V')
            count = count + 5;
        else if (s[i] == 'L')
            count = count + 50;
        else if (s[i] == 'D')
            count = count + 500;
        else
            count = count + 1000;
    }
    cout << count;

    return 0;
}