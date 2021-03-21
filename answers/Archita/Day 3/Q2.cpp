#include <iostream>
using namespace std;

int main() 
{
    int n,l,m,num1,num2,d=0;
    cout<<"enter the number";
    cin>>n;
    cout<<'\n';
    num1=n;
    num2=n;
    while(num1>0)
    {
        l=num1%10;
        while(num2>0)
        {
            m=num2%10;
            if(l==m)
            d++;
            num2=num2/10;
        }
        num1=num1/10;
    }
    if(d==1)
    {
        cout<<"It is a unique number";
    }
    else
    cout<<"It is not a unique number";
	return 0;
}