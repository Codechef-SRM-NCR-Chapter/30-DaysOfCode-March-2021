#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    string c;
    cout<<"Enter the string : ";
    cin>>c;
    cout<<endl<<"The Concatenated String is : ";
    for (int i=0; i<c.size(); i++){
        if(c[i]>=65 && c[i]<=91){
            n++;
            cout<<endl;
        }
        cout<<c[i];
    } 
    cout<<endl<<endl<<"The total number of words in Camel Case String are : "<<n;
    return 0;    
}
