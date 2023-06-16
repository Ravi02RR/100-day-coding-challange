#include <iostream>
using namespace std;
int isStrong(int num)
{
    int m = num;
    int sum = 0;
    int fact = 1;
    int x;
    while (m != 0)
    {
        x = m % 10;
        for (int i = 1; i <= x; i++)
        {
            fact = fact * i;
            sum = sum + fact;
        }
        m = m / 10;
    }
    return (sum == num);
};

int main()
{
    if (isStrong(145))
    {
        cout << "is strong no";
    }
    else
    {
        cout << "not strong";
    }

    return 0;
}

#include <vector>
class Solution
{
public:
    int kthFactor(int n, int k)
    {

        vector<int> arr;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                arr.push_back(i);
            };
        };
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == k)
            {
                return k;
            }
            else
            {
                return -1;
            }
        };
    }
};