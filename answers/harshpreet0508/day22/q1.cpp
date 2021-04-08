// Minimize the binary string by removing substrings of even length

#include <bits/stdc++.h>
using namespace std;

void print(stack<char> s)
{
    if (s.empty())
        return;
 
    char x = s.top();
    s.pop();
    
    print(s);
    
    cout << x;

    s.push(x);
}
 

void min(string s)
{
    stack<char> st;
    st.push(s[0]);
 
    for (int i=1;i<s.size();i++) 
    {
        if (s.empty()) 
        {
            st.push(s[i]);
        }
 
        else 
        {
            if (st.top() == s[i]) 
            {
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
        }
    }
    print(st);
}

int main()
{
    string s = "101001";
    min(s);
    return 0;
}
