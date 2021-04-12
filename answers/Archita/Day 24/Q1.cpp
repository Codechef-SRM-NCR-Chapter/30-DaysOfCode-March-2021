#include <iostream>
#include <string.h>
using namespace std;

void combination(char str[],int n,int l)
{
    int ctr=0;
    char temp;
    for(int i=l;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            combination(str,n,i+1);
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
       }
    }
    cout<<str<<"\n";
}
int fact(int n)
{
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}
int main() 
{
    char str[20];
    cout<<"Enter string\n";
    cin>>str;
    int n;
    n=strlen(str);
    cout<<fact(n)<<endl;
    combination(str,n,0);
    return 0;
}
