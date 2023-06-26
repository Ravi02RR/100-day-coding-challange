#include <iostream>
using namespace std;

long long int sqrtint(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
            return mid;
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

double floatvalue(int n, int precision, int tempSolution)
{
    double factor = 1;
    double ans = tempSolution;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j * j < n; i + factor)
        {
            ans = j;
        }
        return ans;
    }
}

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int tempSolution = sqrtint(n);

    cout << "answer is " << floatvalue(n, 3, tempSolution);
    return 0;
}