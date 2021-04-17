#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map <string,string> t;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        t[a]=b;
    }
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        string y;
        y=t[x];
        if(y.size()<x.size())
            cout<<y<<" ";
        else
            cout<<x<<" ";
    }
    return 0;
}
