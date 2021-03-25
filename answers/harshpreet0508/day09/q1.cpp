// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int>a;
      
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]== target)
                {
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
       return a; 
    }
};
