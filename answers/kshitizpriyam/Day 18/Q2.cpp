#include<iostream>
using namespace std;

int countBits(int a){
	
	int count = 0;
	while(a){
		
		if(a&1)
			count = count +1;
		a = a>>1;
	}
	return count;
}

void insertionSort(int a[],int aux[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // use 2 keys because we need to sort both
        // arrays simultaneously
        int key1 = aux[i];
        int key2 = a[i];
        int j = i-1;
 
        /* Move elements of arr[0..i-1] and aux[0..i-1],
           such that elements of aux[0..i-1] are
           greater than key1, to one position ahead
           of their current position */
        while (j >= 0 && aux[j] < key1)
        {
            aux[j+1] = aux[j];
            a[j+1] = a[j];
            j = j-1;
        }
        aux[j+1] = key1;
        a[j+1] = key2;
    }
}

void sortbysetbitcount(int a[], int n){
	
	int aux[n];
	for(int i=0;i<n;i++){
		aux[i] = countBits(a[i]);
	}
	
	insertionSort(a, aux, n);
}

void printArr(int a[], int n){
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	
	int a[100];
	int n; 
	cout<<"Enter a limit: ";
	cin>>n;
	cout<<"ENter the array: ";
	for(int i=0;i<n;i++){
	   cin>>a[i];
	}
	
	sortbysetbitcount(a, n);
	printArr(a, n);
	
	return 0;
}
