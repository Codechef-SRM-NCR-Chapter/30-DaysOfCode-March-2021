#include <iostream>
using namespace std;

int main() 
{
    int n,i,j;
    cout<<"Enter the no. of testcases\n";
    cin>>n;
    for(int x=0;x<n;x++)
    {
        cin>>i>>j;
        int p=0,c=0,pair;
        for(int x=i;x<=j;x++)
        {
            int flag=0;
            for(int f=2;f<x/2;f++)
            {
                if(x%f==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {p++;}
            else
            {c++;}
        }
        pair=c*p;
        cout<<"\n"<<c<<"*"<<p<<"="<<pair;
        cout<<"\nThe number of pairs possible is "<<pair;
    }
    return 0;
}
