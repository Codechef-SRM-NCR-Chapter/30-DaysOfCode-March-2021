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
    int k;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl;
    k=n;
    while(n>0)
    {
        a[d] = n%10;
        n = n/10;
        d++;
    }

    c = compare(a,d);

    if(c == 1)
        cout<<k<<" is A Unique Number";
    else
        cout<<k<<" is Not A Unique Number";

    return 0;
}
