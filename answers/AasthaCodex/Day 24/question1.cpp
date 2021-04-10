#include <bits/stdc++.h>
using namespace std;
void findMe(char *str, const int start, int end);
int main(){

	char str[] = "ABC";
	int len = 3;
	findMe(str, 0, len);
}
void findMe(char *str, const int start, int end){

	char temp;
	int i, j;
	for (i = start; i < end - 1; ++i)
	{
		for (j = i + 1; j < end; ++j)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			findMe(str, i + 1, end);
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
	cout<<str<< endl;
}
