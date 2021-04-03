#include<bits/stdc++.h>
using namespace std;
int main()
	{
	    int s=0,p=0;
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	    for (int j = 0; j < n; j++) {
	       s+=a[j];
	       p++;
	       if (s==k && p==4){
	       while(p--){
	        cout<<a[j-p]<<" ";
	        
	       };
	       }
	    }
	
	    return 0;
	}
