#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	j=0;
	long int sum=0;
	cout<<"Enter value of n\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		j=(10*j)+i;
		sum+=j;
	}
	cout<<"Sum of series 1+12+123+... upto "<<n<<"th term is "<<sum;
return 0;	
}


