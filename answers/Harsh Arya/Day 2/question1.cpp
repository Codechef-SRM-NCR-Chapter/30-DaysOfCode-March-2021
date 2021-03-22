#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int j;
    for(j=2;j<i;j++)
    if(i%j==0)
    {
        cout<<" Non Emirp Number "<<endl;
        break;
    }
    if(j==i)
    cout<<" Emirp Number ";
    return 0;
}
