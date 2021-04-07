// Given string s, reverse it using stack

int main()
{
    string s="Hello World";
    stack<char>a;
    int i;
    
    for(i=0;i<s.length();i++)
    {
        a.push(s[i]);
    }
    
    char x;
    while(!a.empty())
    {
        x=a.top();
        cout<<x;
        a.pop();
    }
  
    return 0;
}
