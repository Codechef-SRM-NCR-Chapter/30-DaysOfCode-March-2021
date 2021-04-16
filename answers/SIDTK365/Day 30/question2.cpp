#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define number 1000000
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
	FIO;
# 	OJ;
	string s;
	cin >> s;
	unordered_map<int, int> map;
	for (int i = 0; i < s.size(); i++) {
		int temp = s[i] - '0';
		map[temp]++;
	}

	if (map[4] == 0 && map[7] == 0) {
		cout << -1 << endl;
	}
	else if (map[4] == map[7]) {
		cout << 4 << endl;
	}
	else {
		if (map[4] < map[7]) {
			cout << 7 << endl;
		}
		else {
			cout << 4 << endl;
		}
	}
}
