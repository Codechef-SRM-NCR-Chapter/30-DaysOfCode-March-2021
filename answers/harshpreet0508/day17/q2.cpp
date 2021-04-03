// find total sub arrays having sum equal to 0

#include <iostream>
using namespace std;

int main()
{
    int a[]= {6,-1,-3,4,-2,2,4,6,-12,-7};
    int i,j,n=10,s=0,c=0;
    
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=a[j];
            
            if(s==0)
                c++;
        }
    }
    cout<<c;
    return 0;
}
