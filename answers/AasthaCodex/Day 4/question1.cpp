#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number = ";
    cin>>a;
    while (a%2 == 0){
      cout<<"2 ";
      a = a/2;
    }
    for (int i = 3; i <= sqrt(a); i = i+2){
      while (a%i == 0){
         cout<<i<<" ";
         a = a/i;
        }
    }
    if (a > 2)
    cout<<a<<" ";
    return 0;
}
