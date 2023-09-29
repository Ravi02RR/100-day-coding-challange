#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(long long) << endl;

    // adress of var
    int x = 5;
    char y = 'a';

    cout << x << " adress is " << &x; //   0x61ff0c
    cout << y << " adress is " << &y;
    cout << endl; //   0x61ff0c

    // way to store adress ==pointers

    int *p = &x;
    cout << x << "  " << &x << " " << p <<" value is " <<*p;
    cout << endl;

    return 0;
}