#include <bits/stdc++.h>
using namespace std;

string goodNumbers(int N)
{
    queue<string> q;
    
    q.push("1");
    q.push("2");
    
    for(int i = 1; i < N; i++)
    {
        string curr = q.front();
        q.pop();
        
        q.push(curr + "1");
        q.push(curr + "2");
    }
    
    return q.front();
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        
        cout << goodNumbers(N) << "\n";
    }
    
    return 0;
}
