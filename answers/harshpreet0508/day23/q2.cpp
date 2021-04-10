// Generate nth good number usinng queue. A good number is a number
// which contains only 1's and 2's. For eg: 1,2,11,12,21,22 etc.

#include <bits/stdc++.h>
using namespace std;

string good(int n)
{
    queue<string>q;
    q.push("1");
    q.push("2");
    int i;
    for(i=1;i<n;i++)
    {
        string s = q.front();
        q.pop();
        q.push(s+"1");
        q.push(s+"2");
    }
    return q.front();
}

int main()
{
    int n,t;
    cout<<"Enter t ";
    cin>>t;
    while(t--)
    {
        cout<<"\nEnter n ";
        cin>>n;
        cout<<n<<"th good no is "<<good(n)<<'\n';
    }

    return 0;
}
