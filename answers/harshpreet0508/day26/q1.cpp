// Find the number of pairs of prime and compiste numbers from given range

#include <iostream>
using namespace std;

bool prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        return true;
    else
        return false;
}

int main()
{
    int t;
    
    int a1[10],a2[10];
    cout<<"Enter no of test cases ";
    cin>>t;
    while(t--)
    {
        int j=0,k=0;
        int l,h;
        cout<<"\nEnter the range ";
        cin>>l>>h;
        for(int i=l;i<=h;i++)
        {
            if(prime(i))
                a1[j++]=i;
            else
                a2[k++]=i;
        }
        
       cout<<"No of pairs are "<<j*k<<endl;
    }
    return 0;
}
