#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    // 1st for 2
    while(n%2 == 0)   {
        cout<<2<<", ";
        n /= 2;
    }

    for (int i=3; i<sqrt(n); i+=2){
        while(n%i == 0){
            cout<<i<<", ";
            n /= i;
        }
    }
    if (n>2){
        cout<<n;
    }
    return 0;
}