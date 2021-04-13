#include<bits/stdc++.h>
using namespace std;;
int sumME(int array[], int len);
int smallest(int array[], int len);
int minayy(int array[], int len);
int main(){
	int array[] = {3, 2, 5, 1, 7};
	int len = 5;
	cout<<minayy(array , len);
	return 0;
}
int sumME(int array[], int len){
	int sum = 0;
	for (int i=0; i<len; sum+=array[i++]);
	return sum;
}
int smallest(int array[], int len){
	int small = INT_MAX;
	for (int i=0; i<len; i++)
		if (array[i] < small)
			small = array[i];
	return small;
}
int minayy(int array[], int len){
	int sum = sumME(array, len);
	int small = smallest (array, len);
	int minOpe = sum - (len * small);
	return minOpe;
}

