#include <iostream>
#include <ctype.h>
using namespace std;
int main() 
{
    int p,o;
    char str[10];
    cout<<"Enter no. of characters in string:\n";
    cin>>p;
    cout<<"\nEnter no. of operations: ";
    cin>>o;
    cout<<"\nEnter string: ";
    cin>>str;
    cout<<"\nEnter operation in the form of 1 K X and 2 A B: ";
    while(o>0)
    {
        int subs[3];
        cin>>subs[0]>>subs[1]>>subs[2];
        if(subs[0]==1)
        {
            int k=subs[1];
            char ch;
            ch='X';
            for(int i=0;i<p;i++)
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
                cout<<"\nYES\n";
            }
            else
            {
                cout<<"\nNO\n";
            }
        }
        o--;
    }
    return 0;
}
