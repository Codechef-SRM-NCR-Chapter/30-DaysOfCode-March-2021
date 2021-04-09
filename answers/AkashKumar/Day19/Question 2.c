#include<stdio.h>
int countTriplets(int arr[], int n, int sum)
{
    int ans = 0;
    for (int i = 0; i < n-2; i++)
    {
       for (int j = i+1; j < n-1; j++)
       {
           for (int k = j+1; k < n; k++)
               if (arr[i] + arr[j] + arr[k] < sum)
                   ans++;
       }
    }
  
    return ans;
}

int main()
{
    int n;
    printf("Enter size of array  ");
    scanf("%d",&n);
    int sum;
    printf("Enter the sum  ");
    scanf("%d",&sum);
    int arr[n];
    for(int i=0;i<n;i++) {
    printf("Enter element no %d   ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("%d",countTriplets(arr, n, sum));
    return 0;
}
