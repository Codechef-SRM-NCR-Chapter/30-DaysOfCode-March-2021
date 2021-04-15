#include<bits/stdc++.h>
using namespace std;

void rev_string(string str){
	
	stack<string> st;
	
	stringstream ss(str);
	
	string temp;
	
	while(getline(ss,temp,' ')){
		st.push(temp);
	}
	
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main(){
	
	char str[20];
	cout<<"Enter a string: ";
	gets(str);
	
	rev_string(str);
}
