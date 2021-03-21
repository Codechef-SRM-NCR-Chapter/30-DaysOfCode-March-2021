#include<bits/stdc++.h>
using namespace std;
int main(){

    int numOne = 0, numTwo = 1, numThree;
    int input = 50;
    cout<<"Fibonacci Series = "<<endl;
    cout<<numOne<<endl;
    cout<<numTwo<<endl;
    for(int i = 2; i < input; ++i){
        numThree = numOne + numTwo;
        cout<<numThree<<endl;
        numOne = numTwo;
        numTwo = numThree;
    }
    return 0;
}
