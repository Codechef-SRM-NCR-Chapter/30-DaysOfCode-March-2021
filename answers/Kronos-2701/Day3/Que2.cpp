#include<bits/stdc++.h>
using namespace std;
int main()
{
 int d,n,count=0;
 cout<<"Enter no. of digits of desired no.";
 cin>>d;
 int digit[d];
 cin>>n;
 
 for(int i=0;i<d;i++){int last=n%10;
 digit[i]=last;
 n=n/10;
 cout<<digit[i];
 
for(int j=0;j<i;j++){if(digit[j]==digit[i]){ 
              count ++;
             break;}
             else{continue;}
             
 }
 
 if (count!=0){break;}
 else {continue;}
 
 }
 
 if (count!=0){cout<<"Not Unique";}
 else
 {
    cout<<" Unique";
 }
 return 0;
 }