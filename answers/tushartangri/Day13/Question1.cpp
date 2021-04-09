#include <iostream>
using namespace std;
int sum(int num, int summ)
{
    int l;
    while(num>0)
    {
        l=num%10;
        summ+=l;
        num=num/10;
        sum(num,summ);
    }
    return summ;
}
int main() 
{
    int num,summ=0;
    cout<<"Enter number\n";
    cin>>num;
    int temp;
    temp=sum(num,summ);
    cout<<temp;
    return 0;
}
