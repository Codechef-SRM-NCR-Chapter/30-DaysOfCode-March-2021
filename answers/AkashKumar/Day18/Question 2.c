#include <stdio.h>
int countNOofBits(int a)
{
    int count = 0;
    while (a)
    {
        if (a & 1 )
            count+= 1;
        a = a>>1;
    }
    return count;
}
void Sort(int arr[],int aux[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key1 = aux[i];
        int key2 = arr[i];
        int j = i-1;

        while (j >= 0 && aux[j] < key1)
        {
            aux[j+1] = aux[j];
            arr[j+1] = arr[j];
            j = j-1;
        }
        aux[j+1] = key1;
        arr[j+1] = key2;
    }
}

void sortBySetBitCount(int arr[],int n)
{
    int aux[n];
    for (int i=0; i<n; i++)
        aux[i] = countNOofBits(arr[i]);
 
    Sort(arr, aux, n);
}
void printArr(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
}
 
int main()
{
    int n;
    printf("Enter size of the array  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    sortBySetBitCount(arr, n);
    printArr(arr, n);
    return 0;
}
