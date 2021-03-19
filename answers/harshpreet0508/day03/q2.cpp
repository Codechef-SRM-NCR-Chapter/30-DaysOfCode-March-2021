// Print the sum of series 
// 1 + 12 + 123 + 1234 + ... nterms

#include <iostream>
using namespace std;

int main()
{
    int i,j,n,s=0,sum=0;
    cout<<"Enter n ";
    cin>>n;
  
    for(i = 1;i <= n;i++) 
    {
        s = s * 10 + i;
        sum += s;
    }
  
    cout<<sum;
    return 0;
}
