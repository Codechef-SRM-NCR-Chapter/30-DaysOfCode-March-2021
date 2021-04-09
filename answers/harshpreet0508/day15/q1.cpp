// Recursive program to reverse words in a string
// For eg: CAT IS RUNNING -> RUNNING IS CAT

#include <iostream>
#include<string>

using namespace std;

string reverse(string s1,string s2,int l,int r)
{
    if(r < s1.length())
    {
        if(s1[r] != ' ')
        {
            r++;
            return reverse(s1,s2,l,r);
        }
        else
        {
            s2 = s1.substr(l,r-l) + " " + s2;
            r++;
            l = r;
            return reverse(s1,s2,l,r);
        }
    }
    else
    {
        s2 = s1.substr(l,l-r) + " " + s2;
        return s2;
    }
    
}


int main()
{
    string s= "CAT IS RUNNING";
    
    cout<<reverse(s," ",0,0);
    
    return 0;
}
