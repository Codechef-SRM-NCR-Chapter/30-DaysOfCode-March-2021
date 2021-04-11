#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Number of Moves: ";
    cin>>a;
    int X=0,Y=0;
    for(int i=0;i<=a;i++)
    {
        if(a%2==0)
        {
            if(i!=1 || i%2==0)
            {
                Y=Y+1;
            }
        }
        if(a%2!=0)
        {
            if(i==1 || i%2==1)
            {
                Y=Y+i;
            }
        }
    }
    cout<<"Sum for all reachable(X,Y): "<<Y*2;
    return 0;
}
