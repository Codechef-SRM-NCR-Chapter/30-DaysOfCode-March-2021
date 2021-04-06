#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, rem=0, number;
    cin>>n;
    int n1=n;
    while(n>0){
        rem = n%10;
        number = rem + number*10;
        n = n/10;
    }
    int sum=0, k=1;
    while(number>0){
        sum += pow(number%10, k);
        k++;
        number/=10;
    }
    if (sum == n1)
    {cout<<"The number is DISARIUM";}
    else
    {cout<<"NOT!";}

    return 0;
}