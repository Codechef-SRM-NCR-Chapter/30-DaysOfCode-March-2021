// Remove adjacent duplicates from a string using recursion

#include <iostream>
using namespace std;

void duplicate(char* s)
{
    
    if(s[0]=='\0')
        return;
        
    if(s[0]==s[1])
    {
        int i=0;
        
        while(s[i]!='\0')
        {
            s[i]=s[i+1];
            i++;
        }
            
        duplicate(s);
    }
    
    else    
        duplicate(s+1);
}

int main()
{
    char a[100];
    
    cout<<"Enter a String ";
    cin>>a;
    
    duplicate(a);
    
    cout<<"\nString after removing adjacent duplicates "<<a;
    
    return 0;
}
