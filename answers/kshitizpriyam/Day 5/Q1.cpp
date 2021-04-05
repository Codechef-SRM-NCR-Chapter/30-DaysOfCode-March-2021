#include<iostream>
using namespace std;

class fibonacci{
	
	public:
		int a,b,c;
	void generate(int);	
};

void fibonacci::generate(int n){
	
	a=0, b=1,c;
	cout<<a<<", "<<b;
	
	for(int i=1;i<=n-2;i++){
		
		c = a+b;
		cout<<", "<<c;
		
		a=b;
	    b=c;
	}
	
}

int main(){
	
	int n=50;
	
	fibonacci fib;
	fib.generate(n);
}
