#include <iostream>
using namespace std;

int main() {
   int  n;
   cin>>n;
    int x=1;
while (x<=n) {




    for (int i=n-x; i >= 0; i--) {
        cout << " ";}


    for (int k=x; k >0;k--) {
        cout <<"*";



    }
    x+=1;


    cout << endl;

}
