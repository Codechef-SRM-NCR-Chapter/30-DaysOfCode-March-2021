#include<bits/stdc++.h>
using namespace std;

bool Prime(int number){
    if(number <= 1){
        return false;
    }
    for (int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

bool Emirp(int number){
    if(Prime(number) == 0){
        return false;
    }
    int reverse = 0;
    while( number != 0){
        int a = number % 10;
        reverse = reverse * 10 + a;
        number = number / 10;
    }
    return Prime(reverse);
}
int main(){

    int number;
    cin>>number;
    if(Emirp(number) == true){
        cout<<"Yes "<<number<<" is an Emirp Number";
    }
    else{
        cout<<"No "<<number<<" is not an Emirp Number";
    }

    return 0;
}
