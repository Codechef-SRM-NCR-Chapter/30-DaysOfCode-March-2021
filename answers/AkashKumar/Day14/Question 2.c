#include <stdio.h>
void add(int arr1[], int arr2[], int i, int m,int c[])
{
    if(i!=m)
    {
        c[i]=arr1[i]+arr2[i];
        printf("%d,",c[i]);
        add(arr1,arr2,i+1,m,c);
    }
}

int main()
{
    int i=0;  
    int size1;
    printf("Enter the size of array: ");
    scanf("%d",&size1);
    int arr1[size1];
    int arr2[size1];
    int c[size1];
    printf("Enter the elements of the array 1 and put 0 in place of the unfilled elements \n Like if array1 is of size 5 and array 2 is of size 4 then put 0 in the 5th element of array 2 \n ");
    for(int i=0;i<size1;i++)
    {
        printf("Enter element no %d of array 1  ",i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the array 2 and put 0 in place of the unfilled elements \n Like if array1 is of size 5 and array 2 is of size 4 then put 0 in the 5th element of array 2 \n");
    for(int i=0;i<size1;i++)
    {
        printf("Enter element no %d of array 2  ",i+1);
        scanf("%d", &arr2[i]);
    }
    printf("{");
    add(arr1,arr2,i, size1,c);
    printf("}");
    return 0;
}
