
#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // int j = sizeof(nums)/sizeof(nums[0]);
        int j=nums.size();
        int count=0;
       
        vector<int>b;
        for(int i=0;i<j;i++){
            count=0;
            for(int m=0; m<j;m++){
                if(m!=i)
                    if(nums[m]<nums[i])
                        count++;
            }
            b.push_back(count);
        }
        return b;
        

        
    }
};
int main()
{
 return 0;
}


