#include <iostream>
using namespace std;

int main() 
{
    int s=0,n,final=0;
    cout<<"Enter the number";
    cin>>n;
      for(int i=1;i<=n;i++)
    {

        s=(s*10)+i;
        final=final+s;
    }
    cout<<"\nsum of series upto "<<n<<" term is: " <<final;
	return 0;
}
