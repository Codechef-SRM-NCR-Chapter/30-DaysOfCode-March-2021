#include<iostream>
using namespace std;
int main() {
int n,s=0;
cout<<"Enter the number of terms of the series: \n";
cin>>n;
for(int i=1;i<=n;i++){
    s=s*10+ i;
    cout<<s<<"+";
    }
return 0;
}

