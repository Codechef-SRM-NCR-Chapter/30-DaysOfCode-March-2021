#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=0;
string c;
cout<<"Enter the string to check: ";
cin>>c;
for (int i = 0; i < c.size(); i++) 
{
    if(c[i]>=65 && c[i]<=91)
    {
        cout<<endl;
        n++;
    }
    cout<<c[i];
}
 cout<<endl<<n;
return 0;    
}
