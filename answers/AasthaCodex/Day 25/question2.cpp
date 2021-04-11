#include<bits/stdc++.h>
using namespace std;
int stepup(int sc, int start, int end);
int main(){
	int end = 1;
	cout<<(0, 0, end);
	return 0;
}
int stepup(int sc, int start, int end){
	if (abs(sc) > (end))
		return INT_MAX;
	if (sc == end){   
	    return start;
	}
	int pos = stepup(sc + start + 1,
					start + 1, end);
	int neg = stepup(sc - start - 1,
					start + 1, end);
	return min(pos, neg);
}

