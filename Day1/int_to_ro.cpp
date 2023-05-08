// fixed by chat_GPT


#include <iostream>
#include <string>
using namespace std;

string romanToInt(int s)
{
    const int main[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string sign[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string x = "";

    for (int i = 0; i < sizeof(main) / sizeof(main[0]); i++)
    {
        while (s >= main[i])
        {
            s = s - main[i];
            x = x + sign[i];
        }
    }

    return x;
}

int main()
{
    int s;
    cout << "Enter your sber: ";
    cin >> s;

    string x = romanToInt(s);
    cout << "Your number in x numerals is: " << x << endl;

    return 0;
}
