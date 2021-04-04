#include<iostream>
using namespace std;

bool sum_series(int n){
	
	int series,sum;
	cout<<"Series: ";
	for(int i=1;i<=n;i++){
		
		series = series*10 + i;
		sum = sum+series;
		cout<<series<<"+";
		//sum++;
	}
	int sum1 = sum-1;
	cout<<endl;
	cout<<"Sum of series is "<<sum1;
	
}

int main(){
	
	int n;
	cout<<"Enter a limit for the series: ";
	cin>>n;
	
	sum_series(n);
}
