/*Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.
A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:  0 <= i < j < k < arr.length
|arr[i] - arr[j]| <= a and |arr[j] - arr[k]| <= b and |arr[i] - arr[k]| <= c Where |x| denotes the absolute value of x.
Return the number of good triplets. */

  
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        int i,j,k,n=arr.size(),count=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(abs(arr[i]-arr[j])<=a && 
                            abs(arr[j]-arr[k])<=b && 
                                 abs(arr[i]-arr[k])<=c)
                    {
                        count++;
                    }
                }
             }
        }
        return count;
            
    }
};
