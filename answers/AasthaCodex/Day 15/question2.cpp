#include<bits/stdc++.h>
using namespace std;
int pathCounter(int row, int column);
int main(){

    int row, column;
    cout<<"Enter rows and columns = ";
    cin>>row>>column;
    cout<<"Paths = "<<pathCounter(row,column);
    return 0;
}
int pathCounter(int row, int column){

    if(row == 1 or column == 1){
        return 1;
    }
    else{
        return pathCounter(row - 1, column) + pathCounter(row , column - 1);
    }
}
