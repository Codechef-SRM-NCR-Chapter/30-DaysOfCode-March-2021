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
	OJ;
	int n, m;
	cin >> n >> m;
	unordered_map<string, string> map;
	while (m--) {
		string s1, s2;
		cin >> s1 >> s2;
		if (s2.size() < s1.size()) {
			map[s1] = s2;
		}
		else {
			map[s1] = s1;
		}
	}

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		cout << map[s] << " ";
	}
}
