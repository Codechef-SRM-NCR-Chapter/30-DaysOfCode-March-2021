#include <bits/stdc++.h>
using namespace std;

int goodNum()
{
    int n, temp;
    cout<<"Enter the number : ";
    cin>>n;
    temp=n;
    n--;
    queue<string> q;
    q.push("1");
    q.push("2");
    while(n--){
        string str = q.front();
        q.pop();
        q.push(str+"1");
        q.push(str+"2");
    }
    cout<<"The Good Number for "<<temp<<" is "<<q.front()<< endl;
}

int main() 
{
    int T;
    cout<<"Enter the number of tests : ";
    cin >> T;
    while(T--)
    {
        goodNum();
    }
    return 0;
}
