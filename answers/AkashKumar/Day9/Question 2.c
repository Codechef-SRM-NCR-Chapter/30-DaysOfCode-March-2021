#include<stdio.h>
int max(int a, int b)
{
    int max=a;
    if(b>a)
    {
        max=b;
    }
    return max;
}
int SubArraySum(int a[], int size)
{
   int max_prev = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_prev = max(max_prev, curr_max);
   }
   return max_prev;
}
 
/* Driver program to test maxSubArraySum */
int main()
{  
   int n, i;
   printf("Enter no of terms:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       printf("Enter element no %d: ", i+1);
       scanf("%d",&a[i]);
   }
   int max_sum = SubArraySum(a, n);
   printf("Maximum contiguous sum is %d",max_sum);
   return 0;
}
