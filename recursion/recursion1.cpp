// print goodmorning n numbr of times where u take n fron user{
#include <iostream>
using namespace std;
void greet(int n)
{
    if (n == 0)
        return;
    cout << "good morning"<<endl;
    greet(n - 1);
}
int main()
{
    int n;
    cin >> n;
    greet(n);
    return 0;
}