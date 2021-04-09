#include <iostream>
using namespace std;
void displayarr(int arr[], int top)
{
    for(int m=0;m<top;m++)
        {
            cout<<arr[m]; 
        }
}
int main() 
{
    int arr[10],n;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(int m=0;m<n;m++)
    {
       cin>>arr[m]; 
    }
    int top=n;
    while(top>0 && n>0)
    {
        for(int i=0;i<top;i++)
        {
            if(arr[i]==arr[i+1])
            {
                int k=i;
                while(k<top-1)
                {
                    arr[k]=arr[k+1];
                    k++;
                }
                arr[top-1]=0;
                top=top-1;
            }
        }
        if(top>0)
        displayarr(arr,top);
        n--;
        cout<<"\n";
    }
    return 0;
}
