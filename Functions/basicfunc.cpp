#include <iostream>
using namespace std;

void printStar(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int permutauion(int n, int r)

{

    return factorial(n) / factorial(n - r);
}

void printpascle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}

int HCF(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    printStar(5);
    printStar(4);
    printStar(3);
    printpascle(5);
    cout << combination(10, 3);
    cout << "HCF of number are" << HCF(4, 8);
    cout<<swap(2,4);
}