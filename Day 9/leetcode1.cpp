// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int num = nums[i];
        int restNo = target - num;

        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] == restNo)
            {
                cout << i << " " << j;
            }
        }
    }

    return 0;
}
