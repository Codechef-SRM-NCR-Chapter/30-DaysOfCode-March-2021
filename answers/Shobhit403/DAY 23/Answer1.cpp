#include <bits/stdc++.h>
using namespace std;
void printRev(string str)
{
    stack<string> st;
    stringstream ss(str);
    string temp;
    while (getline(ss, temp, ' ')) 
    {
        st.push(temp);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    string str;
    str = "This is a string";
    printRev(str);
    return 0;
}
