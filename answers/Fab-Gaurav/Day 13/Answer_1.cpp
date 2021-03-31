#include<bits/stdc++.h> 
using namespace std;

int sum(int n){ 
    if (n == 0) 
        return 0; 
    return (n % 10 + sum(n / 10)); 
}

int main(){
    int num; 
    cout<<"Enter the digits : ";
    cin>>num;
    int add = sum(num); 
    cout << "Sum of digits \""<<num<<"\" is "<<add<<endl; 
    return 0; 
}
