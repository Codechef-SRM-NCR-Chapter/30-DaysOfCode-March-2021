#include <iostream>
using namespace std;

int main() 
{
    int n;
    char str[20];
    cout<<"Enter the no. of elements in string\n";
    cin>>n;
    if(n%2==0)
    {
        int open =0,close =0;
        cout<<"Enter the sring\n";
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]==40||str[i]==91||str[i]==123||str[i]==60)
            open++;
            else if(str[i]==41||str[i]==93||str[i]==125||str[i]==62)
            close++;
        }
        if(open-close==0)
        cout<<"true";
        else
        cout<<"false";
    }
    else
    cout<<"false";
    return 0;
}
