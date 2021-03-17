#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter value of n\n"; //number of times the loop needs to be executed 
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<(i*i*i)+(2*i);
        cout<<" ";
    }
return 0;    
}
