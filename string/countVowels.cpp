#include <iostream>
using namespace std;

int main()
{
    string s = "raghav";
    int count = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        i++;
    }
    
    cout << "Length of string is: " << s.length() << endl;
    cout << "Number of vowels: " << count << endl;
    
    return 0;
}
