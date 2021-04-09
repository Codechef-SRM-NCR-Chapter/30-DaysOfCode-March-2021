#include <iostream>
using namespace std;
int count(int a)
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
void Sort(int as[],int x[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k1 = x[i];
        int k2 = as[i];
        int j = i-1;
        while (j >= 0 && x[j] < k1)
        {
            x[j+1] = x[j];
            as[j+1] = as[j];
            j = j-1;
        }
        x[j+1] = k1;
        as[j+1] = k2;
    }
}

int main()
{
    int ar[20],n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int a[n];
    for (int i=0; i<n; i++)
        a[i] = count(ar[i]);
    Sort(ar, a, n);
    
    
    for (int z=0; z<n; z++)
        cout << ar[z] << " ";
    
    return 0;
}
