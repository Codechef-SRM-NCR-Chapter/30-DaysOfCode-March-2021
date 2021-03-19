#include <iostream>
using namespace std;
int main() {
    int n,l,m,number1,number2,d=0;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<'\n';
    number1=n;
    number2=n;
    while(number1>0)
    {
        l=number1%10;
        while(number2>0)
        {
            m=number2%10;
            if(l==m)
            d++;
            number2=number2/10;
        }
        number1=number1/10;
    }
    if(d==1)
    {
        cout<<"Unique number";
    }
    else
    cout<<"Not a Unique number";
	return 0;
}
