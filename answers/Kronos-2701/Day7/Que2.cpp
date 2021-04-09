#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,n;
    int arr[n];
        int triplets=0;
    cout<<"Enter the desired no. of elements for the  array : "<<endl;
    cin>>n;
        for(int m=0;m<n;m++){
            cout<<"Enter the "<<m<< "th Element of the array : "<<endl;
       cin>>arr[m]; 
    }
    cout<<"Enter the value of A : ";
    cin>>A;
    cout<<"Enter the value of B : ";
    cin>>B;
    cout<<"Enter the value of C : ";
    cin>>C;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                
                if ((abs(arr[i] - arr[j]) <= A) &&
                    (abs(arr[j] - arr[k]) <= B) && (abs(arr[i] - arr[k]) <= C))
                {
                    triplets++;
                }
            }
        }
    }
    cout<<"The number of Good Triplets is : "<<triplets;
    return 0;
}
