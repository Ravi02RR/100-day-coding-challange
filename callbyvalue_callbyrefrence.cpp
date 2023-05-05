// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// // this will not swap a,b
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     // return temp;
// }
// void swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     // return temp;
// }
// int main()
// {
//     int x = 4, y = 5;
//     cout << "the sum is " << sum(4, 5);
//     // cout << "the sum is " << swap(4, 5);
//     cout << "the sum is " << swapPointer(&x, &y);
//     return 0;
// }

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by refrence using c++referenece variable
void swapREferenceVar(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 6;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}