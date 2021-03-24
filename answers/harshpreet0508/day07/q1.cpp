/*Given two arrays of integers nums and index. Your task is to create target array under the following rules:
Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int>c(nums.size());
        int t,j,k,temp;
        for(int i=0;i<nums.size();i++)
        {
            if(c[index[i]]=='\0')
            {
                c[index[i]]=nums[i];
            }
            else
            {
                t=c[index[i]];
                c[index[i]]=nums[i];
                k=index[i]+1;
                while(k<c.size())
                {
                    temp=c[k];
                    c[k]=t;
                    t=temp;
                    k++;
                }
            }
        }
        return c;
    }
};
