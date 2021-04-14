#include <bits/stdc++.h>
using namespace std;

int count(string str, int n, char x)
{
    int cnt = 0, r;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == x){
            cnt++;
        }
    
    r = n / str.size();
    cnt = cnt * r;
    for (int i=0; i<n % str.size(); i++) 
    {
        if (str[i] == x){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string str;
    cout<<"Enter the string to repeat : ";
    //str = abcac
    cin>>str;

    int n;
    cout<<"Enter the no. of characters to considered : ";
    //n = 10
    cin>>n;

    char c;
    cout<<"Enter character to search : ";
    //c = a
    cin>>c;

    cout<<"Total number of '"<<c<<"' present are : "<<count(str, n, c)<<endl;
    return 0;
}
