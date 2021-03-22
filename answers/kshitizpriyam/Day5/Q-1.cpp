#include<iostream>
using namespace std;

int main(){
	
	int n=50,i,t1=0,t2=1,next_term;
	//int n=50;
	for(int i=1;i<=n;i++){
		
		if(i==1){
			cout<<t1<<" , ";
			continue;}
		
		if(i==2){
			cout<<t2<<" , ";
			continue;}
		
		next_term = t1 + t2;
		t1=t2;
		t2=next_term;
		cout<<next_term<<" , ";
	}
	return 0;
}
