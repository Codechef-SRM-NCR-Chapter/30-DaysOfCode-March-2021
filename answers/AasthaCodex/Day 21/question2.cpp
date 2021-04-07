#include <bits/stdc++.h>
using namespace std;
int Min(int array[ ], int l);
int main(){
   int array[ ] = {6, 8, 4, 5, 2, 3};
   int l = 6;
   cout<<Min(array, l);
   return 0;
}
int Min(int array[ ], int l){
   sort(array, array + l);
   int p = 0;
   int q = 0;
   for (int i = 0; i < l; ++i){
      if(i % 2 == 0){
         p = p * 10 + array[i];
      } 
      else{
         q = q * 10 + array[i];
      }
   }
   return (p + q);
}
