#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		string arr[n + 1];
		arr[0] = "";
		int size = 1, def = 1;
		while (size <= n){
			for (int i = 0; i < def && (size + i) <= n; i++){
				arr[size + i] = "1" + arr[size - def + i];
			}
			for (int i = 0; i < def && (size + def + i) <= n; i++)
				arr[size + def + i] = "2" + arr[size - def + i];
			def = def * 2;
			size = size + def;
		}
		cout <<arr[n]<< endl;
	}
	return 0;
}
