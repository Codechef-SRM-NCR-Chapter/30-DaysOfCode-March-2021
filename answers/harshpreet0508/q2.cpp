// Given a queue of integers and an integer k reverse first k elements and leave others in same order


#include <bits/stdc++.h>
using namespace std;

void rev(int k, queue<int>& q)
{
    if (q.empty() == true || k > q.size())
        return;
        
    if (k <= 0)
        return;
 
    stack<int> st;
 
    
    for(int i=0;i<k;i++) 
    {
        st.push(q.front());
        q.pop();
    }
 
   
    while(!st.empty()) 
    {
        q.push(st.top());
        st.pop();
    }
 
   
    for(int i = 0;i<q.size()-k;i++) 
    {
        q.push(q.front());
        q.pop();
    }
}
 

 

int main()
{
    queue<int> q;
    int x,n;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        queue.push(x);
    }
    
    cin>>k;
    rev(k,q);
    
    while (!q.empty()) {
        cout<<q.front() << " ";
        q.pop();
    }
  return 0;
}
