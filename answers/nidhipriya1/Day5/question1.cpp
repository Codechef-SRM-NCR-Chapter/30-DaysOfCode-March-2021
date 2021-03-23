#include<iostream>
using namespace std;
void fibonacci( int n)
{
	 long long int i,f1=0,f2=1,next=0;
	for(i=0;i<n;i++)
	{
		cout<<f1<<",";
		next=f1+f2;
		f1=f2;
		f2=next;
	}
}
int main()
{

fibonacci(50);
return 0;
}
