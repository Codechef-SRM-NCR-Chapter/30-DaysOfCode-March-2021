#include<iostream>
using namespace std;
int digit_sum(int n)
{
	int d,t;
	if(n!=0)   	
	{
		d=n%10;
	    return (d+digit_sum(n/10));
	}
	else return 0;
}
int main()
{
	int sum,num;
	cout<<"enter number\n";
	cin>>num;
	sum=digit_sum(num);
	cout<<"Sum of digits of "<<num<<" is "<<sum;
	return 0;
}
