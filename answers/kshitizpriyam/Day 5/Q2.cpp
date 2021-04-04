#include<iostream>
using namespace std;

int main(){
	
	int n=4;
	int row, col;
	
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			if(row==2 || (row==4 && col==1)){
				cout<<"#";
			}
			else if(col==2 && row!=4){
				cout<<"#";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
