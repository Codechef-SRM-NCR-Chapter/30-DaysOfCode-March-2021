#include <iostream>
#include <math.h>
using namespace std;
int countDigits(int n) 
{ 
    int count_digits = 0; 
    int x = n; 
    while (x) 
    { 
        x = x/10; 
        count_digits++; 
    } 
    return count_digits; 
} 

int checkunique(int n) 
{ 
    int size = countDigits(n); 
    int a[size];
    int num=n;
    int i=0;
    while(num!=0)
    {
        a[i]=num%10;
        i++;
        num=num/10;
    }
    /*
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }*/
    int flag=0;
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
            }
        }
    }
    return flag; 
} 

int main() 
{ 
    int n ;
    cout<<"Enter the number:" ;
    cin>>n;
    int ans;
    ans=checkunique(n);
    if( ans==0) 
        cout << n <<" is a unique Number"; 
    else
        cout << n<< " is not a unique Number"; 
    return 0; 
} 
