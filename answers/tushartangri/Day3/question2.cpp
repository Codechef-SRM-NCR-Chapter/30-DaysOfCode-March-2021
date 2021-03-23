#include <iostream>
using namespace std;

int main() 
{
    int n,l,m,n1,n2,d=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<'\n';
    n1=n;
    n2=n;
    while(n1>0)
    {
        l=n1%10;
        while(n2>0)
        {
            m=n2%10;
            if(l==m)
            d++;
            n2=n2/10;
        }
        n1=n1/10;
    }
    if(d==1)
    {
        cout<<"unique number";
    }
    else
    cout<<"not a unique number";
	return 0;
}
