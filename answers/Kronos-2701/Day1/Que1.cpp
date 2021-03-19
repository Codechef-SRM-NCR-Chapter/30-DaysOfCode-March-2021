#include <bits/stdc++.h>
using namespace std;
int main() 
{
     int n=0;
     int a=2;
    cout<<"Enter the no. of terms"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){int x = pow(i,3)+a;
    cout<<x<<" ";
    a=a+2;}
     return 0;
}
