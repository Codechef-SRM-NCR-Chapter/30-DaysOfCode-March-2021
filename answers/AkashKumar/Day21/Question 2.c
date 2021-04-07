#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int getMinSum(int *arr, int n) {
   qsort(arr, n, sizeof(int), cmpfunc);
   int a = 0;
   int b = 0;
   for (int i = 0; i < n; ++i) {
      if (i % 2 == 0) {
         a = a * 10 + arr[i];
      } else {
         b = b * 10 + arr[i];
      }
   }
   return a + b;
}
int main() {
    int n;
    printf("Enter size of Array ");
    scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter element number %d ",i+1);
       scanf("%d",&arr[i]);
   }
   printf("%d",getMinSum(arr, n));
   return 0;
}
