#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a : " << endl;
    cin >> a;
    cout << "enter the value of b : " << endl;
    cin >> b;

    char op;
    cout << "enter the operation you want to perform : " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "the result of the operation is : " << a + b << endl;
        break;
    case '-':
        cout << "the result of the operation is : " << a - b << endl;
        break;
    case '*':
        cout << "the result of the operation is : " << a * b << endl;
        break;
    case '/':
        cout << "the result of the operation is : " << a / b << endl;
        break;
    default:
        cout << "invalid operation please slect between +  -  /  *   " << endl;
    }
    return 0;
}