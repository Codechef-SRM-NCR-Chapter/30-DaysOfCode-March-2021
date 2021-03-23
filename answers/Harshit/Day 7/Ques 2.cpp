#include<bits/stdc++.h>
using namespace std;

int main(){    
    
    int a,b,c,s=0;

    int arr[6]={3,0,1,1,9,7};
    a=7;
    b=2;
    c=3;
    for(int i=0;i<6;i++)
    {
        for(int j=(i+1);j<5;j++)
        {
            if((arr[i]-arr[j])<=a);
            {
                for(int k=(j+1);k<4;k++)
                {
                    if(((arr[j]-arr[k])<=b)&&((arr[i]-arr[k])<=c))
                    s++;
                }
            }
        }
    }
    cout<<"The number of good triplets is "<<s;
    return 0;
}
