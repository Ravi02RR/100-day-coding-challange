// #include <iostream>
// using namespace std;

// void swap(int *x, int *y)
// {
//     int temp = *x;  
//     *x = *y;
//     *y = temp;
//     return;
// }

// int main()
// {
//     int a = 2, b = 3;
//     swap(&a, &b);
//     cout << a << "  " << b;
//     return 0;
// }


//pass by referernce using alias

#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;  
    x = y;
    y = temp;
    return;
}

int main()
{
 return 0;
}
