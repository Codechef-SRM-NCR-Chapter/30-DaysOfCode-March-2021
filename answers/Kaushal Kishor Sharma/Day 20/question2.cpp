#include<bits/stdc++.h>

using namespace std;

bool pairCheck(string x);

int main()
{ 
    string str;  
    cout << "Enter the string: ";
    cin >> str;

    if(pairCheck(str) == false)
        cout<<"False";
    else
        cout<<"True";
} 

bool pairCheck(string x)
{
    stack<char> s;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            s.push(x[i]);
        else
        {
            if (s.empty())
                return false;

            char c = s.top();
            if (x[i] == ')' && c != '(')
                return false;
            else if (x[i] == '}' && c != '{')
                return false;
            else if (x[i] == ']' && c != '[')
                return false;
            s.pop();
        }
    }
    return s.empty();
}
