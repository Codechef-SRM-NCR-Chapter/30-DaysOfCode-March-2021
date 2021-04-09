#include<iostream>
using namespace std;

bool prime(int n)
{
    if (n<=1){return false;}
    for(int i=2;i<n;i++) 
    {
      if(n%i==0){return false;}
      else{return true;}
    }
}

int main()
{
    int rows;
    cout<<"Enter no of rows";
    cin>>rows;
    for(int i=0;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1){cout<<"*";}
            else if (prime(j)==true){cout<<"#";}
            else {cout<<"*";}
        }
        cout<<endl;
    }
}