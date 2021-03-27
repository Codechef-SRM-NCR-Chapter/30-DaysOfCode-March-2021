#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    int ct=1;
    cout<<"Enter the array\n";
    cin>>str;
    int n=strlen(str);
    cout<<str[0];
    for(int i=1;i<n;i++)
    {
        if(isupper(str[i]))
        {
            cout<<'\n'<<str[i];
            ct++;
        }
        else
        cout<<str[i];
    }
    cout<<"\nMax number of words "<<ct;
    return 0;
}
