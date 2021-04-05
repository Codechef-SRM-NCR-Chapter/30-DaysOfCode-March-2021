#include<bits/stdc++.h>
using namespace std;

int bc(int n)
{
    int cnt=0;
    while(n){
        if(n & 1 == 1)
            cnt++;
        n = n >> 1;
    }
    return cnt;
}

int func(int n1,int n2) 
{
    int c1 = bc(n1);
    int c2 = bc(n2);

    if(c1<=c2)
    return 0;
    return 1;
}

int main()
{
    int n, a[30];
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a,a+n,func);

    cout<<"Sorted array elements in descending order : ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
