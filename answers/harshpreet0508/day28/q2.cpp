// Construct permutation of numbers 1..n with exactly k peaks

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"Enter t ";
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cout<<"\nEnter n,k ";
        cin>>n>>k;
        
        vector<int>a(n+1);
        
        int n1 = n;
        for(int i=2;i<n;i+=2)
        {
            if(k == 0)
                break;
                
            a[i] = n1--;
            k--;
        }
        
        if(k)
        {
            cout<< -1<<" ";
            continue;
        }
        
        int c=1;
        for(int i=1;i<=n;i++)
        {
            if(!a[i])
                a[i] = c++;
        }
        
        cout<<"Permutations ";
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}
