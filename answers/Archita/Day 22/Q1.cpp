#include <iostream>
#include <string.h>
using namespace std;
void removefromarray(char str[],int i,int j)
{
    int n=strlen(str);
    while(j<n)
    {
        str[i]=str[j+1];
        i++;
        j++;
    }
}
void removeevensubarray(char str[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if((j+i)%2!=0)
            {
                removefromarray(str,i,j);
            }
        }
    }
}
int main() 
{
    char str[20];
    cout<<"Enter binary string\n";
    cin>>str;
    int n=strlen(str);
    removeevensubarray(str,n);
    if(strlen(str)>0)
    cout<<str;
    else
    cout<<"-1";
    return 0;
}
