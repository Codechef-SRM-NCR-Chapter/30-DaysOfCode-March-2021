#include <bits/stdc++.h>
using namespace std;
int main() 
{
int num;
cin >> num;
while(num--)
{
int n;
cin >> n;
n--;
queue<string> q;
q.push("1");
q.push("2");
while(n--)
{
string s = q.front();
q.pop();
q.push(s+"1");
q.push(s+"2");
}
cout << q.front() << endl;
}
return 0;
}
