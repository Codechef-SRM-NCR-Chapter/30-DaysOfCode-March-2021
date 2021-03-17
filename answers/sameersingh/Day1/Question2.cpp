#include<iostream> //including preprocessor directive for input/output
using namespace std;  //using standard namespace 

int main(){

 int n;  //initialisation of variable
 cout<<"Please input a number to print star pattern \n";  //asking user for input
 cin>>n;  //taking input

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
