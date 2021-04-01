#include<iostream>
using namespace std;
string ReverseMe(string stringsEntered);
int main(){

	string stringEntered = "Hi my name is xyz";
	cout <<ReverseMe(stringEntered);
	return 0;
}
string ReverseMe(string stringEntered){

	int len = stringEntered.length() - 1;
	int startingPoint;
    int endingPoint = len + 1;
	string rev = "";
	
	while(len >= 0){

		if(stringEntered[len] == ' '){
			
            startingPoint = len + 1;
			while(startingPoint != endingPoint)
				rev += stringEntered[startingPoint++];
			rev += ' ';
			endingPoint = len;
		}
		len--;
	}
	startingPoint = 0;
	while(startingPoint != endingPoint)
		rev += stringEntered[startingPoint++];
	return rev;
}


