/*Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn)
such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum. */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int a=0,i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i+=2)
            a+=min(nums[i],nums[i+1]);
        return a;
    }
};
