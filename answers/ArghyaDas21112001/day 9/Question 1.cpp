#include <iostream>

using namespace std;

int main()
{
    int numsSize;
    cout<<"Enter the number of elements: ";
    cin>>numsSize;
    int nums[numsSize];
    cout<<"Enter the elements: ";
    for(int i=0;i<numsSize;i++)
    {
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<"The target is: "<<target<<endl;
                cout<<"The index of the elements are: ["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}
