#include<iostream>
using namespace std;

    int fib(int n)
    {
        if (n==0 ||n==1){return n;}
        return fib(n-1)+fib(n-2);
    }
int main()
{ 
    for(int i=0;i<=50;i++){cout<<fib(i)<<" "; }
   
}