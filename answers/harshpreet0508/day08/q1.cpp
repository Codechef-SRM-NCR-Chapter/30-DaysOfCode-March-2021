/*You are given an integer array nums. The unique elements of an array are the elements that 
appear exactly once in the array.Return the sum of all the unique elements of nums.*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
       int f[100]={0};
        for(int i=0;i<nums.size();i++)
        {
            f[nums[i]-1]++;
        }
        int s=0;
        for(int i=0;i<100;i++)
        {
            if(f[i]==1) s+=i+1;
        }
        return s;
    }
};
