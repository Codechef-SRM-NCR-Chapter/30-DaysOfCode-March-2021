#include<bits/stdc++.h>
using namespace std;

int main(){    
    int n;
    int s=0;
    int r=0;
    int g=2;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }
  
    for (int j = 0; j < n;j++) {
        for (int k = j+1; k <n; k++) {
            if(nums[j]==nums[k])
                s++;
        }
        if(s<1){
        r=nums[j]+nums[g];
        s=0;
        }
    }
   
    cout<<r;
    return 0;
}
