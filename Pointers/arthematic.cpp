#include <iostream>
using namespace std;

// int main()
// {
//     int x = 7;
//     int *ptr = &x;
//     cout << ptr << endl;
//     *ptr = *ptr + 1;
//     cout << *ptr << endl;
//     return 0;
// }
int main()
{
    int x;
    cin >> x;
    
    int firstdig, lastdigit;
    lastdigit = x % 10;
    while (x<9)
    {
        
    }
    
    cout << firstdig <<"   " << lastdigit;

    return 0;
}