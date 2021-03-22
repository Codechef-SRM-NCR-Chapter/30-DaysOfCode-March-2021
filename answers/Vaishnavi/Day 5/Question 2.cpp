#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int i,j,k,n,check;
    cin>>n;
    k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k==1)
            {
                cout<<"*";
            }
            else 
            {check=0;
                for(int l=2;l<k;l++)
                {
                    if(k%l==0)
                    {
                        check=1;
                        break;
                    }
                    
                }
                if(check==1)
                {
                    cout<<"*";  //not prime
                }
                else cout<<"#";
            }
            k++;
        }
        cout<<"\n";
    }

    return 0;
}
