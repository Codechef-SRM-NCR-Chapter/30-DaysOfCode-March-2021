#include<iostream>   
#include<math.h>
using namespace std;
int main()    
{
    int n,n1,n2,len;
    len=0;
	cout<<"Enter the number to be checked\n";
	cin>>n;
	n1=n2=n;   
    while(n != 0)
	{    
        len=len+1;    
        n=n/10;    
    }  
	int l1=len;  
    int sum,rem;      
    //Calculates the sum of digits powered with their respective position    
    while(n1>0)
	{
	   
        rem = n1%10;    
        sum = sum + (int)pow(rem,l1);    
        n1 = n1/10;    
        l1--;    
    }    
    if(sum == n2)    
        cout<<n2<<" is a disarium number\n";    
    else    
        cout<<n2<<" is not a disarium number\n"; 
    return 0;    
}    
