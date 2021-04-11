#include <iostream>
using namespace std;

int main() 
{
    int n,m=0,x,y,i,j;
    cout<<"Enter the number of test cases\n";
    cin>>n;
    cout<<"Enter destination point";
    cin>>x>>y;
    for(i=0,j=0;i<n;)
    {
        i=i+1;
        if(j!=y)
        j=j+1;
        m++;
        if(i==x && j==y)
        break;
    }
    if(i!=x || j!=y)
    {
        cout<<"\nDestination cannot be reached";
    }
    else
    cout<<"\nNumber of moves are "<<m;
    return 0;
}
