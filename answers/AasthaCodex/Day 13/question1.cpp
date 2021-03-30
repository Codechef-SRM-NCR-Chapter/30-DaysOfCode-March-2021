#include<bits/stdc++.h>
using namespace std;
int AddMe(int input);
int main(){

    int input;
    cout<<"Enter the Number = ";
    cin>>input;
    int sum = AddMe(input);
    cout<<"Sum of DIGITS = "<<sum;
    return 0;
}
int AddMe(int input){
    
    if(input != 0){
        return (input % 10 + AddMe(input/10));
    }
    else{
        return 0;
    }
} 
