#include <iostream>

using namespace std;

char tolowercase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch = 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolowercase(a[s]) != tolowercase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        return 1;
    }
}

void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "enter your name" << endl;
    cin >> name;

    cout << "your name is " << endl;
    cout << name << endl;
    int len = getLength(name);
    reverseString(name, len);

    // 1d char array is known as string

    // lenght
    cout << "length is " << getLength(name);

    return 0;
}