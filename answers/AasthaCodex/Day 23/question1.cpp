#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> str;
	char a;
	while (cin.get(a) && a != '\n')
		str.push(a);

	while (!str.empty()){
		cout << str.top();
		str.pop();
	}
	cout <<endl;
}
