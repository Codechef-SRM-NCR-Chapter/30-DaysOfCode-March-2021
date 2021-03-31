#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void dupli(char string[]){
    if (string[0] == '\0')
        return;
    if (string[0] == string[1]){
        int i = 0; 
        while (string[i] != '\0'){
            string[i] = string[i + 1];
            i++;
        }
        dupli(string);
    }
    dupli(string + 1);
}

int main(){
    char string[20];
    cout<<"Enter the string : ";
    cin>>string;
    cout<<"String before removing the duplicates : "<<string<<endl;
    dupli(string);
    cout<<"String after removing the duplicates : "<<string<<endl;
    return 0;
}
