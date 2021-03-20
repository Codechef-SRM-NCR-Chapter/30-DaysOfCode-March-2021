// Print the prime factorisation of number

#include <iostream>
using namespace std;

int main()
{
    int n,c;
    cin>>n;
   
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
            for(int j=2;j<i/2;j++)
            {
                if(i%j==0) c=0;
            }
            if(c==1) cout<<i<<' ';
        }
    }
    return 0;
}
