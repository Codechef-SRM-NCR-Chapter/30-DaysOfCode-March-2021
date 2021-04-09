#include<stdio.h>

int main()
{  
   int n, target;
   
   printf("no of terms:");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter element no %d: ", i+1);
       scanf("%d",&a[i]);
   }
   printf("Enter Target number:  ");
   scanf("%d",&target);
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if((a[i]+a[j])==target)
           {
               printf("[%d , %d]", i, j);
           }
       }
   }
   return 0;
}
