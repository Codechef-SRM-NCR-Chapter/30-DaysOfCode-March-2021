#include<bits/stdc++.h>
using namespace std;

int main(){    
    int n;
    cin>>n;
	int a[n],temp,sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
		    if(a[i]>a[j]){
			    temp = a[i];
			    a[i] = a[j];
			    a[j]=temp;
		    }
	    }
    }
    for(int i = 0; i < n; i = i+2){
	    sum = sum + std::min(a[i], a[i+1]);
    }
    cout<<sum;
    return 0;
}
