#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter the number of rows\n";
    cin>>n;
    for(i=1; i<=n; i++)
    {
       
        for(j=i; j<=n; j++)   // Printing spaces 
        {
            cout<<" ";
        }
        
        for(j=1; j<=i; j++)  // Printing stars
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
