#include <iostream>
using namespace std;

int main() 
{
    int a[10],b[20],n,t,flag=0,num;
    cout<<"\nEnter the number of test cases\n";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"\nEnter the no. of elements in array\n";
        cin>>n;
        cout<<"Enter the elements of array a\n";
        for(int m=0;m<n;m++)
        {
            cin>>a[m]; 
        }
        cout<<"Enter the elements of array b\n";
        for(int m=0;m<n;m++)
        {
            cin>>b[m]; 
        }
        cout<<"Enter num\n";
        cin>>num;
        for(int m=0;m<n;m++)
        {
            if((a[m]+b[m])!=num)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            int k;
            for (int i = 0; i < n; ++i) 
            {
                for (int j = i + 1; j < n; ++j)
                {
                    if (b[i] < b[j]) 
                   {
                        k = b[i];
                        b[i] = b[j];
                        b[j] = k;
                    }
                }
            }
            for(int m=0;m<n;m++)
            {
                if((a[m]+b[m])!=num)
                {
                    flag=1;
                    break;
                }
                else 
                flag=0;
            }
        }
        if(flag==0)
        cout<<"YES";
        else
        cout<<"NO";
    }
    return 0;
}
