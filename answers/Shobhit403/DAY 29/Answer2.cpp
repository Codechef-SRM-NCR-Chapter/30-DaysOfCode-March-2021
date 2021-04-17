#include <iostream>
using namespace std;
bool sum(int a)
{
    if(a==0)
        return true;
    if(a%2021==0||a%2020==0)
        return true;
    if(a-2021==2020||a-2020==2021)
        return true;
    return false;
}
int main()
{
    int a;
    cin>>a;
    if(sum(a))
        cout<<"YES ";
    else
        cout<<"NO ";
    return 0;
}
