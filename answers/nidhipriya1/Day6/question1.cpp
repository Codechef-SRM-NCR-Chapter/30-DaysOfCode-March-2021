#include <iostream>
using namespace std;
int main()
{
    int n, i, extraCandies, max = 0;
    cout<<"Enter no of childrens";
    cin>>n;
    int candies[n];
    for (i = 0; i < n; i++)
    {
        cin>>candies[i];
    }
    cout<<"Enter extraCandies";
    cin>>extraCandies;
    max = candies[0];
    for (i = 0; i < n; i++)
    {
        if (candies[i] > max)
            max = candies[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extraCandies < max)
        {
            cout<<"FALSE"<<" ";
        }
        else
        {
            cout<<"TRUE"<<" ";
        }
    }
}
