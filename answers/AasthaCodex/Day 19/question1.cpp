#include<bits/stdc++.h>
using namespace std;
void MissingRepeating(int array[], int n);
int main(){
       int array[6] = {1, 3, 3};
       MissingRepeating(array, 3);
       return (0);
}
void MissingRepeating(int array[], int n)
    {
       int xorMe = 0;
       int i;
       int a = 0;
       int b = 0;
       for(i=0; i<n; i++)
          xorMe = xorMe ^ array[i];
       for(i=1; i<=n; i++)
          xorMe = xorMe ^ i;
       int BitNum = xorMe & ~ (xorMe - 1);
       for(i = 0; i < n; i++)
       {
          if(array[i] & BitNum){
               a = a ^ array[i]; 
          }
          else{
               b = b ^ array[i]; 
          }
       }
       for(i = 1; i <= n; i++){
          if(i & BitNum){
              a = a ^ i; 
          }  
          else{
              b = b ^ i;  
          }
       }
       cout<<a<<" "<<b;
    }
  
