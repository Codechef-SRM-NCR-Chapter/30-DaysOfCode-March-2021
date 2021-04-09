#include<bits/stdc++.h>
using namespace std;
int BitCount(int number);
int compareme(int n1, int n2);
int main(){
   int array[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
   int n = sizeof(array)/sizeof(array[0]);
   sort(array, array + n, compareme);
   for(int i = 0; i<n; i++){
      cout << array[i] << " ";
   }
   return 0;
}
int BitCount(int number){
   int count = 0;
   while(number){
      if(number & 1 == 1)
      count = count + 1;
      number = number >> 1 ; 
   }
   return count;
}
int compareme(int n1, int n2){
   int count1 = BitCount(n1);
   int count2 = BitCount(n2);
   if(count1 <= count2)
   return 0;
   return 1;
}
