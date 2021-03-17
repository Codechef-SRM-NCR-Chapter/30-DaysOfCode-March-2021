#include <iostream>
using namespace std;

int main() 
{
    int n=0;
    cout<<"Enter the order of square matrix" ;
    cin>>n;
    for(int i=0;i<n;i++)
	{
		cout<<"\n";
		for(int j=0;j<n;j++)
		{
			if((i+j)<(n-1))
			cout<<" ";
			else
			cout<<"0";
		}
	}
	return 0;
}
