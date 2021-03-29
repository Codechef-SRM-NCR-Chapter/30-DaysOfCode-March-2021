#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the length of the string and the number of operations : ";
    cin>>n>>m;
    
    char s[n];
    cout<<"Enter the string : ";
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }
    
    int z=0;
    int r=0;
    char a, b, c;
    while(m--){
        cout<<"Enter the Characters : ";
        cin>>a>>b>>c;
        int f=c/2;
        if(a=='2'){
            while(f--){
                if(s[b+z-1]==s[c-z-1]){
                    r++;
                    z++;
                }
            };
            if(r==(c-b)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a=='1'){
            s[b-1]='x';
        }
    };

return 0;
}
