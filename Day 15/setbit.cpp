#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int nums[] = {2,3};
    int numCount = sizeof(nums) / sizeof(nums[0]);

    int totalSetBits = 0;

    for (int i = 0; i < numCount; ++i)
    {
        totalSetBits += countSetBits(nums[i]);
    }

    cout << "Total set bits: " << totalSetBits << endl;

    return 0;
}
