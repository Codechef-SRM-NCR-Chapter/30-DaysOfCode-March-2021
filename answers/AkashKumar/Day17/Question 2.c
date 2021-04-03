#include <stdio.h>

int main()
{
  int n;
  printf("Enter size of Array  ");
  scanf("%d",&n);
  int arr[n];
  for(int i =0;i<n;i++) 
  {
  printf("Enter element no %d  ",i+1);
  scanf("%d",&arr[i]);
  }
  int k = 0;
  int res = 0;
  
  for (int i = 0; i < n; i++) 
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += arr[j];
  
      if (sum == k)
        res++;
    }
  }
  printf("%d",res);
}
