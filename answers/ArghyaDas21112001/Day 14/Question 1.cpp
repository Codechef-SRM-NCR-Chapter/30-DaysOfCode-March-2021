#include <iostream>

using namespace std;
void removeDuplicates(char* S)
{
    if (S[0] == '\0')
        return;
    if (S[0] == S[1])
    {
        int i = 0; 
        while (S[i] != '\0') 
        {
            S[i] = S[i + 1];
            i++;
        }
        removeDuplicates(S);
    } 
    removeDuplicates(S + 1);
}

int main()
{
    char S1[100];
    cout<<"Enter the string: ";
    cin>>S1;
    cout<<"Before removal: "<<S1<<endl;
    removeDuplicates(S1);
    cout <<"After removal: "<<S1 << endl;
  
    return 0;
}
