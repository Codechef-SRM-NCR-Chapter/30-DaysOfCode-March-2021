#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of words in string\n";
    cin>>n;
    cout<<"Number of words of both languages\n";
    cin>>m;
    map <string,string> t;
    for(int i=0;i<m;i++)
    {
        string lang1,lang2;
        cin>>lang1>>lang2;
        t[lang1]=lang2;
    }
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        string str1;
        str1=t[str];
        if(str1.size()<str.size())
        cout<<str1<<" ";
        else
        cout<<str<<" ";
    }
    return 0;
}
