#include <bits/stdc++.h>
using namespace std;

void permute(string str, int l, int r)
{
    if (l == r)
        cout<<str<<", ";
    else
    {
        for (int i=l; i<=r; i++)
        {
            swap(str[l], str[i]);
            permute(str, l+1, r);
            swap(str[l], str[i]);
        }
    }
}

void cnt_str(int n)
{
    int num=1;
    for(int i=n; i>0; i--)
    {
        num*=i;
    }
    cout<<"The number of strings created are : "<<num<<endl;
    return;
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int n = str.length();
    cnt_str(n);
    cout<<"The strings are : ";
    permute(str, 0, n-1);
    return 0;
}
