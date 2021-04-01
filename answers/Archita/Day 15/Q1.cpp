#include <iostream>
#include<string.h>
using namespace std;
void reverse(char str[],char rev[])
{
    int l, i, j, n, m;
    l   = strlen(str);
    j = 0;

    n = l - 1;
    m = l - 1;

    while(n > 0)
    {
        if(str[n] == ' ')
        {
            i = n + 1;
            while(i <= m)
            {
                rev[j] = str[i];

                i++;
                j++;
            }
            rev[j++] = ' ';

            m = n - 1;
        }

        n--;
    }

    for(i=0; i<=m; i++)
    {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0'; 

}
int main() 
{
    char str[20], rev[20];
    cout<<"Enter any string: ";
    cin.getline(str,20);
    reverse(str,rev);
    cout<<str<<'\n'<<rev;
    return 0;
}
   
