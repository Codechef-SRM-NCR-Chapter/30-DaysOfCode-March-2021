#include<iostream>
using namespace std;
int main()
{
    int i,n,j,k,m;
    j=0;
    int index[100], nums[100], output[100];
    cout<<"Enter length of array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements of nums array\n";
        cin>>nums[i];
        cout<<endl;
        output[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements of index array\n";
        cin>>index[i];
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        k=index[i];
        if(output[k]==-1)
        {
        output[k]=nums[j];
        j++;
        }
        else 
        {
             for(m=n-1;m>=k;m--)
             output[m]=output[m-1];
             output[k]=nums[j];
             j++;
        }

    }
    for(i=0;i<n;i++)
    {cout<<output[i]<<",";}
return 0;
}
