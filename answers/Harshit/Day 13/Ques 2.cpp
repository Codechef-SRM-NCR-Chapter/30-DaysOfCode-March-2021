#include <bits/stdc++.h>
using namespace std;


	int palindromecheck(int arr[],int size, int i){
	    int s=0;
	    if(i==size||i>size)
		{
			s=1;
		}
	
		else if(arr[i]==arr[size-1])
		{
		 return palindromecheck(arr,size-1,i+1);
		}
		 
		 return s;
	}


int main(){
	int n;
	cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int ck=palindromecheck(arr,n,0);
		if(ck==1)
		{
			cout<<"Palindrome";

		}
		else if(ck==0)
		{
		cout<<"Not Palindrome";
		}
return 0;
}
