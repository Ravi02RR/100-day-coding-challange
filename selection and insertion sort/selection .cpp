class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int min = INT_MAX;
            int minidx = -1;
            for (int j = i; j < n; j++)
            {
                if (nums[j] < min)
                {
                    min = nums[j];
                    minidx = j;
                }
            }
            swap(nums[i], nums[j]);
        }
    }
};


class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int min = INT_MAX;
            int minidx = -1;
            for (int j = i; j < n; j++)
            {
                if (nums[j] < min)
                {
                    min = nums[j];
                    minidx = j;
                }
                
            }
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};