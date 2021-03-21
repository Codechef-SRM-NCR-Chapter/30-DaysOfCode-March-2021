#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number you want to check:";
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
    cout<<"It is a Disarium Number.";
   else
    cout<<"It is not a Disarium Number.";
}
