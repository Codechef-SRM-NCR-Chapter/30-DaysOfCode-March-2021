#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<'\n';
    while(n%2==0)
    {
        cout<<"2 ";
        n/=2;
    }
    for(int i=3;i<=n;i+=2)
    {
        while((n%i)==0)
        {
             cout<<i<<" ";
             n/=i;
        }
       
    }
    
	return 0;
}
