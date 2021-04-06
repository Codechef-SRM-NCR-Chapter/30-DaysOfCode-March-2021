#include<bits/stdc++.h>
using namespace std;
bool Parenthesis(string str);
int main()
{
    string str = "{()}[{}]";
    if (Parenthesis(str)) { cout <<"true";}
    else { cout<<"false";}
    return 0;
}
bool Parenthesis(string str)
{
    if (str.length() & 1) {
        return false;
    }
    stack<char> stack;
    for (char ch: str){
        if (ch == '(' || ch == '{' || ch == '['){
            stack.push(ch);
        }
        if (ch == ')' || ch == '}' || ch == ']'){
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            stack.pop();
            if ((top == '(' && ch != ')') || (top == '{' && ch != '}') || (top == '[' && ch != ']')){
                return false;
            }
        }
    }
    return stack.empty();
}
