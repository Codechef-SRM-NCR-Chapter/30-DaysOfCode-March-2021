// Given two languages and a string, make the string as short as possible

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1[10],s2[10],s3[10];
    int n,m,i,j;
    
    cout<<"Enter n,m: ";
    cin>>n>>m;
    
    cout<<"Enter first language: ";
    for(i=0;i<m;i++)
        cin>>s1[i];
        
    cout<<"Enter second language: ";
    for(i=0;i<m;i++)
        cin>>s2[i];
     
    cout<<"Enter string: ";   
    for(i=0;i<n;i++)
        cin>>s3[i];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s3[i]==s1[j] || s3[i]==s2[j])
            {
                if(s1[i].length()<s2[i].length())
                    s3[i]= s1[j];
                else
                    s3[i]= s2[j];
            }
        }
    }
    
    cout<<"\nConverted string is: ";    
    for(i=0;i<n;i++)
        cout<<s3[i]<<" ";
        
    return 0;
}
