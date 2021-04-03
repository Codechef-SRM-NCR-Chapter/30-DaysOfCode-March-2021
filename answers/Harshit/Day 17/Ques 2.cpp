#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
			int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += a[j];
                if (sum == 0)
                    s++;
            }
        }
        cout<<s;;
    
    return 0;
}
