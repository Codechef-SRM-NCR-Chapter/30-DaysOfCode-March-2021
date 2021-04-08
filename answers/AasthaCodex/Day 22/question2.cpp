#include <bits/stdc++.h>
using namespace std;
string FString(string str);
int main(){
	string str = "101001";
	cout<<FString(str);
}
string FString(string str)
{
	int i, len;
	len = str.length();
	int p = 0, q = 0;
	for (i = 0; i < len; i++) {
		if (str[i] == 'p')
			p = p + 1;
		else
			q = q + 1;
	}

	string finalString = "";
	if (p > q)
		for (i = 0; i < p - q; i++)
			finalString += "1";
	else
		for (i = 0; i < p - q; i++)
			finalString += "0";

	return finalString;
}
