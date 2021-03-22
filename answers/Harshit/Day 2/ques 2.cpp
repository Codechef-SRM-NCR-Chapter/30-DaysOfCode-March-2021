#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number:";
    cin>>num;
    int num1=num,c=0;
    while(num1!=0)
    {
        num1/=10;
        c++;
    }
    num1=num;
    int sum=0;
    while(num1!=0)
    {
        int rem=num1%10;
        sum+=pow(rem,c);
        num1/=10;
        c--;
    }
   if(sum==num)
    cout<<num<<" is a Disarium Number.";
   else
    cout<<num<<" is not a Disarium Number.";
}
