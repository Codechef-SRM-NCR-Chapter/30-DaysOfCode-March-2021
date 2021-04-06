#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int first=n, second=0;
    bool v1 = true, v2 = true;
    /*Program to reverse*/
    while(n>0)
    {
        second = second*10 + n%10;
        n /= 10;
    }

    // Program to check prime 
    for (int i=2; i<first-1; i++)
    {
        if (first%i == 0)
        {v1 = false;break;}
    }
    for (int i=2; i<second-1; i++)
    {
        if (second%i == 0)
        {v2 = false;break;}
    }

    if (v1 == 1 and v2 == 1){
        cout<<"This number is EMIRP.";
    }
    else{
        cout<<"Not EMIRP!";
    }
    return 0;
}