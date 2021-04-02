#include <stdio.h>
int count(int arr[], int L, int R)
{
  if (R >= L)
  {
    int mid = L + (R - L)/2;

    if ( (mid == R || arr[mid+1] == 0) && (arr[mid] == 1))
      return mid+1;

    if (arr[mid] == 1)
      return count(arr, (mid + 1), R);

    return count(arr, L, (mid -1));
  }
  return 0;
}
int main()
{
    int size, i;
    printf("Enter size of array  ");
    scanf("%d",&size);
    
    int a[size];
    for(i=0;i<size;i++)
    {
    printf("Enter element no %d  ",i+1);
    scanf("%d",&a[i]);
    }
    int z;
    z=count(a,0,size-1);
    if(z==0)
    {
    printf("No 1");
    }
    else
    {
        printf("%d",z);
    }
    return 0;
}
