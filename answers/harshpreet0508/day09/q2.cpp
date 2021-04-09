// Given an integer array nums, find the contiguous subarray which has the largest sum and return its sum.

class Solution {
public:
  
     int maxSubArray(vector<int>& nums) {
       
        int n = nums.size();
        int s,a = INT_MIN;
       
        for(int i=0;i<n;i++)
        {
          s = 0;
          for(int j=i;j<n;j++)
            {
                s += nums[j];
                a = max(a,s);
            }
        }
       
        return a;
    }
};
