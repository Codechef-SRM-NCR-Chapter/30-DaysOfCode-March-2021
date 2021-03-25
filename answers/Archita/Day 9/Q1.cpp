#include <iostream>
using namespace std;

int main() 
{
    int nums[10],n,t,i,j,flag=0;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>nums[m]; 
    }
    cout<<"Enter the target no. ";
    cin>>t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((nums[i]+nums[j])==t)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }
    cout<<"Indexes are ["<<i<<","<<j<<"]";
    return 0;
}
