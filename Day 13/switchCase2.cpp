#include <iostream>
using namespace std;
int main()
{
    int ch = '1';
    int num = 1;
    switch (ch)
    {
    case 1:
        cout << "first" << endl;
        break;
    case 2:
        cout << "second" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "value of num is " << num << endl;
            break;

        default:
            cout << "this is default case" << endl;
            break;
        }

        break;

    default:
        cout << "this is default case " << endl;
        break;
    }
    return 0;
}