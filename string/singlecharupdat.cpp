#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of string";
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << s << endl;
    int i = 0;
    while (s[i] != '\0')
    {
        if (i % 2 == 0)
        {
            s[i] = 'a';
        }
        i++;
    }
      cout << s << endl;

    // string s = "ravi";
    // cout << s << endl;
    // s[1] = 'm';
    // cout << s;

    return 0;
}