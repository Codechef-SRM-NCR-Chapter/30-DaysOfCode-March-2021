#include <bits/stdc++.h>
using namespace std;

	int sum(int n){
		int s=0;
		if(n==0)
			return s;
		
		else{
			s=s+n%10+sum(n/10);
		}
		return s;
	}

int main(){
	int n;
    cin>>n;
	cout<<sum(n);
return 0;
}
