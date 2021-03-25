#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,arr[10],n,gt=0;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>arr[m]; 
    }
    cout<<"Enter the values of a,b and c";
    cin>>a>>b>>c;
    for(int i=0;i<(n);i++)
    {
        for(int j=(i+1);j<(n-1);j++)
        {
            if((arr[i]-arr[j])<=a);
            {
                for(int k=(j+1);j<(n-2);j++)
                {
                    if(((arr[j]-arr[k])<=b)&&((arr[i]-arr[k])<=c))
                    gt++;
                }
            }
        }
    }
    cout<<"\nThe number of good triplets is "<<gt;
    return 0;
}
