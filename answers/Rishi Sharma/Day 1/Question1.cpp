#include <iostream>
#include <cmath>
using namespace std;

void series(int n){
    int even=2;
    for(int i=1 ;i<=n; i++)
    {
        cout<<pow(i, 3)+even<<", ";
        even+=2;
    }
}
int main(){
    int n;
    cin>>n;
    series(n);
}