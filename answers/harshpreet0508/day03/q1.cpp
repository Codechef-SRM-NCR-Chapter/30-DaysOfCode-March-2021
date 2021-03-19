// Check whether given number is unique or not eg: 12345 is unique but 123445 is not
// A number is unique if all its digits are distinct 

#include <iostream>
using namespace std;

int compare(int a[],int d)
{
    int i,j;
    for(i = 0;i < d;i++)
    {
        for(j = 0;j<d;j++)
        {
            if(i != j && a[i] == a[j])
                return 0;
        }
        
    }
    return 1;
}
int main()
{
    int n,d=0,ud,c=0;
    int a[100];
    
    cout<<"Enter n ";
    cin>>n;
    
    while(n>0)
    {
        a[d] = n%10;
        n = n/10;
        d++;
    }
    
    c = compare(a,d);
    
    if(c == 1)
        cout<<"Unique Number";
    else
        cout<<"Not a Unique Number";
    
    return 0;
}
