#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number whose prime factorization is required\n";
	cin>>n;
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
