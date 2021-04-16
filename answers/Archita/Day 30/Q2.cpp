#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    char str[20];
    int n, four=0,seven=0,fourtyseven=0;
    cin>>str;
    n = strlen(str);
    for(int i=0; i<n; i++)
    {
        if(str[i]=='4')
        four++;
        else if(str[i]=='7')
        seven++;
        else if((str[i]=='4' && str[i+1]=='7') && (i+1 < n))
        fourtyseven++;
    }
    if( (four==0 && seven==0) && (fourtyseven==0) )
    {
        cout<<"-1\n";
    }
    else
    {
        int ans = 0;
        ans = max(four,max(seven,fourtyseven));
        if(ans == four )
        cout<<"4\n";
        else if(ans == seven)
        cout<<"7\n";
        else if(four == seven)
        cout<<"4\n";
        else 
        cout<<"47\n";;
    }
    return 0;
}