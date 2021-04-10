#include<iostream>
#include<cmath>
using namespace std;

int Count_squares(int n){
	
	return sqrt(int(n)) - 1;
}


int main(){
	
	int n;
	cout<<"Enter a no. : ";
	cin>>n;
	
	cout<<Count_squares(n);
}
