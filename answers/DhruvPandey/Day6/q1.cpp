//candies
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j;
int candies[100];
cout<<"Enter the number of kids :  \t";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter the candies for kid"<<"\t"<<i+1<<"\t :";
cin>>candies[i];
}
cout<<"Enter the number of extra candies \n";
cin>>j;

//largest element
for(i = 1;i < n; ++i)
{
if(candies[0] < candies[i])
candies[0] = candies[i];
}
cout << "Greatest Number of Candies among the Kids is" << candies[0]<<"\n";
//checking the candies after extra candies are added
for(i=0;i<n;i++)
{
if(candies[i]+j>=candies[0])
cout<<"  TRUE ";
else
{
cout<<" FALSE ";
}
}
getch();
}



