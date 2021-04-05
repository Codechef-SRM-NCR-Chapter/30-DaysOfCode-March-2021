#include <bits/stdc++.h>
using namespace std;

void missNum(int arr[], int n)
{
    for(int i=0; i<n; i++){
	    if(arr[i]>0){
	        cout<<i+1<<" ";
	    }
	}
	return;
}

void repNum(int arr[], int n)
{
    for(int i=0; i<n; i++){
	    if(arr[abs(arr[i])-1] > 0){
	        arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];

	    }
	    else{
	        cout<<abs(arr[i])<<" ";
	    }
	}
	return;
}


int main()
{
	int n, arr[n];
    cout<<"Enter the size of the array : ";
    cin>>n;
	cout<<"Enter the elements in the array : ";
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	cout<<"Repeating number : ";
	repNum(arr, n);
	cout<<endl;
	cout<<"Missing number : ";
	missNum(arr, n);
    return 0;
}
