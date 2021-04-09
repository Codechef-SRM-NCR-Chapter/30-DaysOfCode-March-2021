#include <bits/stdc++.h> 
using namespace std;
void reverse_Que(queue<int>* Q , int k);
int main(void){ 
  queue<int> Q;
  int K = 3; 
  Q.push(1);
  Q.push(2);
  Q.push(3);
  Q.push(4);
  Q.push(5);
  reverse_Que(&Q , K);
  while(!Q.empty())
   cout<<Q.front()<<",",
   Q.pop();
 return 0; 
}
void reverse_Que(queue<int>* Q , int k)
{
  if(Q->empty() == true || k > Q->size() || k <= 0)
    return;
  stack<int> st;  
  for(int i=0 ; i<k ; i++)
    st.push(Q->front()),
    Q->pop();
  while(!st.empty())
    Q->push(st.top()),
    st.pop();
  for(int j=0 ; j<(Q->size()-k) ; j++)
    Q->push(Q->front()),
      Q->pop();
}

