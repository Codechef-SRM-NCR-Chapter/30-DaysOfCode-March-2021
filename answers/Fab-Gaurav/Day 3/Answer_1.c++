//Program to print the sum of the series 1+12+123+1234....upto "n" terms.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int sum=0,n,final=0;
    cout<<"Enter the no. of terms of series : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=(sum*10)+i;
        final=final+sum;
        if(i<n)
        cout<<sum<<"+";
        else
        cout<<sum;
    }
    cout<<"\nSum is :"<<final;
	return 0;
}
