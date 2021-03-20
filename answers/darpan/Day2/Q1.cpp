#include <iostream>
using namespace std;

int main() 
{
    int fn=0,bn=0,flag1=0,flag2=0,rem=0,num=0;  
    cout<<"Enter a number" ;
    cin>>fn;
    cout<<'\n';
    num=fn;
    while(fn>0)
    {
        rem=fn%10;
        bn=bn*10+rem;
        fn/=10;
    }
    fn=num;
    cout<<"The reversed number is "<<bn<<'\n';
    for(int i=2;i<=fn/2;i++)
    {
        if(fn%i==0)
        {
            flag1=1;
            break;
        }
    }
    for(int j=2;j<=bn/2;j++)
    {
        if(bn%j==0)
        {
            flag2=1;
            break;
        }
    }
    if(flag1==flag2)
    {
        if(flag1==0)
        cout<<"This is an emirp number"; 
        else
        cout<<"This is not an Emirp number";
    }
     else
        cout<<"This is not an Emirp number";
	return 0;
}

