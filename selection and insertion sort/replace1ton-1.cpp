#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void replace(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        nums[i] = i;
    }
}
void visted(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v(5, 0);
    for (int i = 0; i < n; i++)
    {
        
    }
    
}
int main()
{
    vector<int> nums = {19, 12, 23, 8, 16};
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    cout << endl;

    replace(nums);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}