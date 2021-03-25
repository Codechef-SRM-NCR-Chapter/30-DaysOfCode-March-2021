#include <iostream>
using namespace std;
int main()
{
    int numsSize;
    cout<<"Enter number of elements:\n";
    cin>>numsSize;
    int nums[numsSize];
    cout<<"Enter elements:\n";
    for(int i=0;i<numsSize;i++)
    {
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target element:\n";
    cin>>target;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<"The index of the elements are:\n["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}
