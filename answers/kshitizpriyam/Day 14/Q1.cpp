#include <bits/stdc++.h>
#include<cstring>
using namespace std;
  
void removeDuplicates(char* S)
{
    if (S[0] == '\0')
        return;
  
    if (S[0] == S[1]) {
          
        // Shift character by one to left
        int i = 0; 
        while (S[i] != '\0') {
            S[i] = S[i + 1];
            i++;
        }
  
        removeDuplicates(S);
    }
  
    // If the adjacent characters are not same
    // Check from S+1 string address
    removeDuplicates(S + 1);
}
  
int main()
{
    char S1[100];
    gets(S1);
    removeDuplicates(S1);
    cout << S1 << endl;
  
    return 0;
}
