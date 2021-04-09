#include <iostream>
#include <ctype.h>
using namespace std;

int main() 
{
    int n,m;
    char str[10];
    cout<<"Enter the number of characters in string";
    cin>>n;
    cout<<"\nEnter the number of operations";
    cin>>m;
    cout<<"\nEnter string";
    cin>>str;
    cout<<"\nEnter operations in the form of 1 K X and 2 A B ";
    while(m>0)
    {
        int subs[3];
        cin>>subs[0]>>subs[1]>>subs[2];
        if(subs[0]==1)
        {
            int k=subs[1];
            char ch;
            ch='X';
            for(int i=0;i<n;i++)
            {
                if(str[i]==str[k])
                str[i]=ch;
            }
            cout<<str;
        }
        else if(subs[0]==2)
        {
            int first=subs[1];
            int end=subs[2],flag=0;
            while(first<end)
            {
                if(str[first]==str[end])
                {
                    first++;
                    end--;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"\nYes\n";
            }
            else
            {
                cout<<"\nNo\n";
            }
        }
        m--;
    }
    
    return 0;
}
