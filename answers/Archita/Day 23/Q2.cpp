#include <iostream>
using namespace std;

void add(int arr[],int b,int &f, int &r)
{
    if(f==0 && r==19)
    cout<<"Queue is full";
    else
    {
        if(f==-1)
        {
            f=0;
        }
        r++;
        arr[r]=b;
    }
}
void display(int arr[],int f, int r)
{
    int i;
    if(f==-1)
    cout<<"Empty Queue";
    else
    {
        for(int i=f;i<=r;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main() 
{
    int n,arr[20],c=0,k=0,f=-1,r=-1;
    cout<<"Enter the no. of test cases\n";
    cin>>n;
    cout<<"Enter numbers";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;k<=;i++)
    {
        int b=i;
        while(i!=0)
        {
            int a=i%10;
            if (a!=1 || a!=2)
            continue;
            i=i/10;
        }
        add(arr,b,f,r);
        k++;
        c++;
    }
    display(arr,f,r);
    return 0;
}
