#include<iostream> 
using namespace std; 

int main()
{ 
   int k = 2 * 4 - 2;
 for (int i = 0; i <4; i++) 
 {
     for (int j=0; j<k; j++){
               cout<<" ";
 }
  k=k-2;
 for (int j =0; j <=i; j++){
 
           cout<< "* ";
 }
     cout<<endl;
 }
     return 0;
}
