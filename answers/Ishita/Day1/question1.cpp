#include<iostream>  //for input/output
#include<cmath>     //for mathematical operations
using namespace std;

int main()
{  
int n;  //initialisation of variable
cout<<"Please input a number to print the series"<<endl;  
cin>>n;

int i,x,y;  //initialisation of variables

for (i = 1; i <=n; i++)  //'for' loop to print the series
{
     x=pow(i,3);
     y= x + 2*i;
     cout<<y<<", ";

}
     return 0;
}
