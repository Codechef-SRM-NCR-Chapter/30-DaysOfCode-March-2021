// Number of steps required to reach point (x,y) from (0,0)
// taking moves either (x+1,y) or (x+1,y+1)

#include <iostream>
using namespace std;

int count(int x,int y)
{
    if(x<y)
        return(x+y+2*(y-x)/2);
    else
        return(x+y+2*(x-y+1)/2);
}

int main()
{
    int x,y;
    cout<<"Enter x and y ";
    cin>>x>>y;
    cout<<"Minimum Number of steps required are "<<count(x,y);

    return 0;
}
