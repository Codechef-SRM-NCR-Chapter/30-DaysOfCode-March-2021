#include<iostream> // for input/output
using namespace std;  //using standard namespace 

int main()
{
 int n=4;  //initialisation of variable
 

 for (int i = 1; i <=n; i++)  //'for' loop to print star pattern
 {
     for (int j = 1; j <=n; j++)
     {
          if (j<=n-i)
          {
               cout<<"  ";
          }
          else{
               cout<<"* ";
              }
     }
     cout<<endl;
 }
     return 0;
}
