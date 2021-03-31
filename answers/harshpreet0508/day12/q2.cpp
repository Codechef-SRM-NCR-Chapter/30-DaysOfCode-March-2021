// Given a string s, count the number of substrings that start and end with 1

#include<iostream>
using namespace std; 
  
int count(string s) 
{ 
    int c = 0;

    for (int i=0; s[i] !='\0'; i++) 
    { 
        if (s[i] == '1') 
        { 
            for (int j=i+1; s[j] !='\0'; j++) 
            {
                if (s[j] == '1') 
                    c++; 
            }
        } 
    } 
    return c; 
} 
  
int main() 
{ 
string s;
cin>>s;
cout << count(s); 
return 0; 
} 
