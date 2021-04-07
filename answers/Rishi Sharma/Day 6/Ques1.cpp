#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    int a[100], b[100];
    for(int i=0 ;i<n; i++)
    {   
        cin>>a[i];
        b[i] = a[i];
    }
    int extraCandies = 0;
    cin>>extraCandies;

    for(int i=0; i<n; i++)
    {
        a[i] += extraCandies;
        if (*max_element(b, b+n) <= a[i])
            cout<<"True, ";
        else 
            cout<<"False, ";
        a[i] -= extraCandies;
    }
    return 0;
}