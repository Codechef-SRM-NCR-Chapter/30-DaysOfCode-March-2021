#include<iostream>  //including preprocessor directive for input/output
#include<cmath>     //including preprocessor directive for mathematical operations
using namespace std;  //using standard namespace 

int main(){  //main code starts

int n;  //initialisation of variable
cout<<"Please input a number to print the series"<<endl;  //asking user for input
cin>>n;  //taking input

int j,i,k;  //initialisation of variables

for (i = 1; i <=n; i++)  //'for' loop to print the series
{
     j=pow(i,3);
     k= j+ 2*i;
     cout<<k<<" ";

}
     return 0;
}
