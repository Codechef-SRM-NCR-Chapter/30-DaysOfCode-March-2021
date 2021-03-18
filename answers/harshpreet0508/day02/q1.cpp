// to check if given no is Emirp number or not
// Emirp no is prime read forward and backward eg 13 as both 13 and 31 are prime no. 

#include <iostream>
using namespace std;

int prime(int n)
{
  int c=0,i;
  
  for(i=2;i<n/2;i++)
  {
    if(n%i==0) c++;
  }
  return c;
}
int main()
{
  int c1,c2,n,i,r=0,ud=0;
  cout<<"Enter n ";
  cin>>n;
  c1=prime(n);
  //cout<<c1;
  if(c1==0)
  {
    while(n>0){
    ud=n%10;
    r=r*10+ud;
    n=n/10;
    }
    
    c2=prime(r);
    cout<<c2;
    if(c2==0)  cout<<"Emirp no";
    else cout<<"Not an Emirp no";
  }
  else
    cout<<"Not an Emirp no";

  return 0;
}
