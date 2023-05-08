// #include <iostream>
// using namespace std;

// // return value function key

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int num1, num2;
//     cout << "enter first number" << endl;
//     cin >> num1;
//     cout << "enter second number" << endl;
//     cin >> num2;

//     cout << "the sum of two number  is  " << sum(num1, num2);
//     return 0;
// }

// function ____prototyping

// type function-name (arguments);------------syntax of function prototyping

#include <iostream>
using namespace std;

int sum(int a, int b);
void g(void);

int main()
{
    int num1, num2;
    g();
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    // num1 and num 2 are  actual [parameters]
    cout << "the sum of two number  is  " << sum(num1, num2);
    return 0;
}

int sum(int a, int b)
{

    // formal parametres 

    int c = a + b;
    return c;
}

void g()
{
    cout << "padh le bhai \n";
}