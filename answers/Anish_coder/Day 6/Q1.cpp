#include <iostream>
using namespace std;

int main() 
{
    int arr[10],n,c=0,i,xc;
    cout<<"Enter the number of students";
    cin>>n;
    cout<<"\nEnter the no. of candies each student got";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
    c=arr[i];
    for(i=1;i<n;i++)
    {
        if(arr[i]>c)
        c=arr[i];
    }
    cout<<"\nlargest number of candies is "<<c;
    cout<<"\nExtra candies left\n";
    cin>>xc;
    for(i=0;i<n;i++)
    {
        if((xc+arr[i])>=c)
        cout<<"true ";
        else
        cout<<"false ";
    }
	return 0;
}
