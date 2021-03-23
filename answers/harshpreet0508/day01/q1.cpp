// Print the series 3,12,33,72,...n terms 
#include <iostream>
using namespace std;
int main()
{
  int i,j=2,n;
  cout<<"Enter n ";
  cin>>n;
  for(i=1;i<=n;i++)
  { 
    cout<<i*i*i+j<<' ';
    j+=2;
  }
  return 0;
}
