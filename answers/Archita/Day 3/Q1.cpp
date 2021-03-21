#include <iostream>
using namespace std;

int main() {
    int sum=0,n,final=0;
    cout<<"Enter the number of terms of series";
    cin>>n;
    cout<<'\n';
    for(int i=1;i<=n;i++)
    {
       
        sum=(sum*10)+i;
        final=final+sum;
        if(i<n)
        cout<<sum<<"+";
        else
        cout<<sum;
        
    }
    cout<<"\nfinal sum is "<<final;
	return 0;
}
