#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
using namespace std;
 int main()
 {
int n,p,q,s;
int sum;
cout<<"Sum of the Series 1+12+123+1234....."<<"\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"Enter the number of terms";
cin>>n;
int i;
for(i=1;i<=n;i++)
{
int p=1/81;
int r=pow(10,n+1);
int s=-9*n-10;
int sum=sum+p*(r+s);
}
cout<<"Sum of the required terms is"<<sum;
return 0;

}
