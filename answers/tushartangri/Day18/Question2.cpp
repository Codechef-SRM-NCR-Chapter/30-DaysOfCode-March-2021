#include <iostream>
using namespace std;
int countbits(int a)
{
    int ctr=0;
    while(a>0)
    {
        if(a&1)
        ctr+=1;
        a=a>>1;
    }
    return ctr;
}
void insertionSort(int arr[],int aux[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k1 = aux[i];
        int k2 = arr[i];
        int j = i-1;
        while (j >= 0 && aux[j] < k1)
        {
            aux[j+1] = aux[j];
            arr[j+1] = arr[j];
            j = j-1;
        }
        aux[j+1] = k1;
        arr[j+1] = k2;
    }
}
void sort(int arr[],int n)
{
    int aux[n];
    for (int i=0; i<n; i++)
        aux[i] = countbits(arr[i]);
    insertionSort(arr, aux, n);
}

void displayarr(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[20],n;
    cout<<"Enter the no. of characters in the array \n";
    cin>>n;
    cout<<"Enter the numbers of array \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,n);
    displayarr(arr,n);
    return 0;
}
