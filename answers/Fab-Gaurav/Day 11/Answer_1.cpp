#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int s=0;
    for(int i=0; i<str.length(); i++){
        for (int j=i+1; j<str.size(); j++){
            if(str[i]==str[j])
            s++;
        }
    }
    
    if(s%2==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
