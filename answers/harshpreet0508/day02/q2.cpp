// disarium Number
//sum of digits powered with their respective position is equal to number

#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number:";
    cin>>n;
    int n1=n,c=0;
    while(n1!=0)
    {
        n1/=10;
        c++;
    }
    n1=n;
    int s=0;
    while(n1!=0)
    {
        int r=n1%10;
        sum+=pow(r,c);
        n1/=10;
        c--;
    }
   if(s==n)
    cout<<"Disarium Number.";
   else
    cout<<"not a Disarium Number.";
}
