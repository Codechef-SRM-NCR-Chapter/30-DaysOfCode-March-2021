#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    int sum=0,n,m;
    cout<<"Enter the number of test cases\n";
    cin>>n;
    m=1; // no. of moves
    for(int x=0;x<=n;x++)
    {
        sum=sum+2*abs(x); //as it will move only on x axis y always remains 0
    }
    cout<<"sigma of abs(x) & abs(y) = "<<sum;
    return 0;
}