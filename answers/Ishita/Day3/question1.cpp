#include <iostream>
using namespace std;

int main() 
{
    int s=0,n,final=0;
    cout<<"Enter the number of terms of series";
    cin>>n;
    cout<<'\n';
    for(int i=1;i<=n;i++)
    {

        s=(s*10)+i;
        final=final+s;
        if(i<n)
        cout<<s<<"+";
        else
        cout<<s;

    }
    cout<<"\nfinal sum is "<<final;
	return 0;
}
