#include <bits/stdc++.h>
using namespace std;

int doubl(string s,string st,int i,int j){
       if(s[i]==s[i+1]){
       st[j]=s[i];
       doubl(s,st,i+2,j+1);
    }
   
   else
    return 1;
 return 0;
}
int main(){
    cout<<"Enter the string ";
    string s;
    string st;
            cin>>s;

    doubl(s,st,0,0);
   
     cout<<st;

return 0;
}
