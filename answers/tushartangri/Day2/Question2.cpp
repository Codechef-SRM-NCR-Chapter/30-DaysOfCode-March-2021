#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
        int num,n=0,sum=0,d=0,c;  //d=digit , c= number at position
    cout<<"Enter the number";
    cin>>num;
    cout<<"\n";
    n=num;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    n=num;
    while(n>0)
    {
        c=n%10;
        sum=sum+pow(c,d);
        d--;
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"Number "<<num<<" is a disarium number";
    }
    else
    cout<<"It is not a disarium number";
	return 0;
}
