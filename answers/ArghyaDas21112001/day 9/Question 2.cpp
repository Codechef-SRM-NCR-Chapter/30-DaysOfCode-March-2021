#include <iostream>

using namespace std;
int max(int a,int b)
{
    return a>b ? a:b ;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int nums[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    
    int max_sum=nums[0], sum=nums[0];
    for(int i=1; i<size; i++)
    {
        sum = max(nums[i], sum+nums[i]);
        if(sum>max_sum) 
        {
            max_sum=sum;
        }
    }
    cout<<"The maximum sum for the array is: "<<max_sum;
    
    return 0;
}
