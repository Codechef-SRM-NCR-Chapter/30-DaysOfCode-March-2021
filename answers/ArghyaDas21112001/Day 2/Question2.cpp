
#include<iostream.h>
int prime(int n)
{
int i;
int x=1;
for(i = 2; i < n; i++) 
{
      if((n % i) == 0) 
	{
        	 x = 0;
      }
}
return x;
}

   

int main()
{
int num;
int num1;
int sum,flag,flag1,rem;
cout<<"ENter the number: ";
cin>>num;
num1=num;

flag=prime(num1);

while(num!=0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}

flag1=prime(sum);

if(flag==1 && flag1==1)
cout<<num1<<"is a Emirp Number";

else
cout<<num1<<"is not a emirp number";

return 0;
}
