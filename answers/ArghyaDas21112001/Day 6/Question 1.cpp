#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int max=0;
    int candies[size];
    cout<<"Enter the candies: ";
    for(int i=0;i<size;i++)
    {
        cin>>candies[i];
    }
    int extraCandies;
    cout<<"Enter the extraCandies: ";
    cin>>extraCandies;
    bool ans[size];
    for(int i=0;i<size;i++)
    { 
        if(candies[i]>max)
        {
            max=candies[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if((candies[i]+extraCandies)>=max)
        {
            ans[i]=true;
        }
        else
        {
            ans[i]=false;
        }
       
        if(ans[i]==0)
        {
            cout<<"False ";
        }
        else
        {
            cout<<"True ";
        }
    }
    return 0;
}
