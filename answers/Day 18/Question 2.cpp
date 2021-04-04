#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the range starting from 1: ";
    cin>>n;
    int count=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(i*i<n)
            count++;
    }
    cout<<"The number of perfect squares until "<<n<<" is "<<count;
    return 0;
}
