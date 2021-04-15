#include<bits/stdc++.h>
using namespace std;

void pairs()
{
    int x, y, a=0, b=0;
    cout<<"Enter the Prime Range : ";
    cin>>x;
    cout<<"Enter the Composite Range : ";
    cin>>y;
    for(int i=x; i<=y; i++){
        if(i==2 || i==3 || i==5 ||i==7){
            a+=1;
        }
        else if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
            a+=1;
        }
        else if(i!=2 && i!=3 && i!=5 && i!=7 || i%2==0 || i%3==0 || i%5==0 || i%7==0){
            b+=1;
        }
    }
    cout<<"Total number of pairs are : "<<a*b<<endl;
    return;
}

int main()
{
    int t;
    cout<<"Enter the test cases : ";
    cin>>t;
    while(t--){
        pairs();
        cout<<endl;
    }
    return 0;
}
