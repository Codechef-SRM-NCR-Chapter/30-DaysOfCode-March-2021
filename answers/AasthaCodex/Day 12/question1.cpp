#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
char stringPalindrome(string A, string B);
int main(){
    int n, m;
    cin>>n>>m;
    string w, s;
    int temp = 0;
    string str;
    cin>>str;
    while(m--){
        string s;
        cin>>s;
        for(int i = 0; s[i] = '\0'; i++){
            s[2] = temp;
            s[1] = s[2];
            temp = s[1];
            s = w;
        }
    }
    
    char ans = stringPalindrome(s, w);
    if(ans == 'B'){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}
char stringPalindrome(string A, string B)
{
	
	int countA[MAX_CHAR] = {0};
	int countB[MAX_CHAR] = {0};
	int l1 = A.length(), l2 = B.length();
	for(int i=0; i<l1;i++)
		countA[A[i]-'a']++;
	for(int i=0; i<l2;i++)
		countB[B[i]-'a']++;

	for (int i=0 ;i <26;i++)
		if ((countA[i] >1 && countB[i] == 0))
		return 'A';

	return 'B';
}
