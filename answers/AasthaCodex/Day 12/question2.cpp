#include<bits/stdc++.h>
using namespace std;
int main(){

    int testCase;
    cout<<"Enter the number of test cases = ";
    cin>>testCase;
    int length;
    cout<<"Enter length of the string = ";
    cin>>length;
    cout<<"Enter string = ";
    string string;
    cin>>string;
    while(testCase--){
        if(length == 1 and string[0] == 1){
            cout<<"0"<<endl;
        }
        else{
            int calculate = count(string.begin(), string.end(),'1');
            int answer = calculate*(calculate  - 1);
            int final = answer/2;
            cout<<final<<endl;
        }
    }
    return 0;
}
