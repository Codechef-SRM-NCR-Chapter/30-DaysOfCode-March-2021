#include <iostream>
using namespace std;
int  main()
{
	int i;
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	for(i=1;i<n;i++)
	{
		cout<<((i*i*i)+(2*i))<<" ";
	}
	return 0;
}
