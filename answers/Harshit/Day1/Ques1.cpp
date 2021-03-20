#include<iostream> 
#include<cmath>     
using namespace std;

int main()
{  
 int n; 
 cout<<"Enter number till you want to print the series"<<endl;  
  cin>>n;

 int x,y; 

   for (int j = 1; j <=n; j++){
     x=pow(j,3);
     y= x + 2*j;
     cout<<y<<", ";

   }
 return 0;
}
