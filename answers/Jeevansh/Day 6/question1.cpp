#include<iostream>
using namespace std;
int main()
{
	int n,candies[100],extraCandies;
	int i,j,count;
	cout<<"Enter length of the array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter elements\n";
	cin>>candies[i];
	cout<<endl;
    }
    cout<<"\nEnter the number of extra candies\n";
    cin>>extraCandies;
    cout<<endl;
    for(i=0;i<n;i++)
    {   
        count=0;
      	int temp=candies[i]+extraCandies;
		for(j=0;j<n;j++)
		{
		if(temp>=candies[j]&&j!=i)
    	{count++;}
    	}
		if(count==n-1)
    	{cout<<"TRUE, ";}
    	else cout<<"FALSE, ";
	}
return 0;  	
}
