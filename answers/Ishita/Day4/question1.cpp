#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number \n";
	cin>>n;
	 cout<<"Prime Factorisation of the given number is ";
	for(int i=2;n>1;i++)
	{
	while(n%i==0)
	 {
	 cout<<i<<", ";
	 n=n/i;
	 }
	}
return 0;    
}
