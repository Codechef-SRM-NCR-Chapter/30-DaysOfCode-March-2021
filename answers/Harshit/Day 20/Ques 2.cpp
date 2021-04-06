#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
      cin>>a;
      int s=0;
      int r=0;
      int p=a.size();
        for(int i=0;i<p;i++){
             if(a[i]==40||a[i]==91||a[i]==123)
                s++;
             else if(a[i]==41||a[i]==93||a[i]==125)
                r++;
        }
        if(s-r==0)
            cout<<"TRUE";
        else
            cout<<"FALSE";
 return 0;
}
