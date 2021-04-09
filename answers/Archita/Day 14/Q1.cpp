#include <iostream>
#include <string.h>
using namespace std;
void duplicates(char str[])
{
    if (str[0] == '\0')
        return;
    if (str[0] == str[1])
    {
        int i = 0; 
        while (str[i] != '\0') 
        {
            str[i] = str[i + 1];
            i++;
        }
        duplicates(str);
    }
    duplicates(str + 1);
}
int main() 
{
    char str[20];
    cout<<"Enter string";
    cin>>str;
    duplicates(str);
    cout<<str;
    return 0;
}
