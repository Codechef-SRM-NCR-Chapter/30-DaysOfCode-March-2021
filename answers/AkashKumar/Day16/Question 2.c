#include <stdio.h>
int search(int arr[], int initial, int last)
{
    while (initial <= last) {
        int mid = (initial + last) / 2;
  
        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0))
            return mid;
  
        else if (arr[mid] == 1)
            last = mid - 1;
  
        else
            initial = mid + 1;
    }
 
    return -1;
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
    z=search(a,0,size-1);
    if(z==-1)
    {
    printf("No 1");
    }
    else
    {
        printf("%d",z);
    }
    return 0;
}
