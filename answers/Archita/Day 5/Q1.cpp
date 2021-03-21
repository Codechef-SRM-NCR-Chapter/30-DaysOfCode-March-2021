#include <iostream>
using namespace std;

int main() 
{
    int x1=0,x2=1,x;
    for(int i=0;i<50;i++)
    {
        x=x1+x2;
        cout<<x1<<" ";
        x1=x2;
        x2=x;
    }
	return 0;
}
