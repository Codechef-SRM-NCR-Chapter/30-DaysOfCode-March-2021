#include <iostream>
using namespace std;
int countBits(int a)
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
void insertionSort(int arr[],int aux[], int n)
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
        aux[i] = countBits(arr[i]);
    insertionSort(arr, aux, n);
}
void printArr(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortBySetBitCount(arr, n);
    printArr(arr, n);
    return 0;
}
