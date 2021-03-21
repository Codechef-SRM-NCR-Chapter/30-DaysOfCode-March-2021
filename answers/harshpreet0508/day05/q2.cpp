/* Print the pattern
*
# #
* # *
# * * *      */

#include <iostream>
using namespace std;

void prime(int n)
{
    int c=0;
    if(n==1) cout<<"* ";
    else
    {
        for(int i=2;i<n;i++)
        {
          if(n%i==0) c++;
        }
        if(c==0) cout<<"# ";
        else cout<<"* ";
    }
}

int main()
{
    int i,j,t=1;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
          prime(t);
          t++;
      }
      cout<<endl;
    }

    return 0;
}
