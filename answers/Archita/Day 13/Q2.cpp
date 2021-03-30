#include <iostream>
using namespace std;
int palindrome(int num[10],int n,int i)
{
    while(i<n)
    {
        if( num[i]==num[n])
        {
            i++;
            n--;
            return 0;
            palindrome(num,n,i);
        }
        else
        {
            return 1;
            break;
        }
    }
}
int main() 
{
    int num[10],n,c,i;
    cout<<"Enter the number of characters\n";
    cin>>n;
    cout<<"Enter number\n";
    for(i=0;i<n;i++)
        cin>>num[i];
    i=0;
    n--;
    c=palindrome(num,n,i);
    if(c==0)
    cout<<"It is a palindrome";
    else if(c==1)
    cout<<"It is not a palindrome";
    return 0;
}
