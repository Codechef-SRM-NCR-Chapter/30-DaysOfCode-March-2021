#include <bits/stdc++.h>
using namespace std;
int main()
{ int sum=1, s,x=1;
cout<<"Enter no. of terms";
cin>>s;
if (s<=1){cout<<s;}
else
{for (int i =2;i<=s;i++){  x=x*10;
x=x+i;
sum=sum+x;
 }
cout<<sum;}
return 0;
}