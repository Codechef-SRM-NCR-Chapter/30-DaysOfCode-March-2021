#include <iostream>
using namespace std;

int main() {
    long num1 = 0, num2 = 1, nTerm = 0;

     
      for (int i = 1; i <= 50; ++i) {
       
        if(i == 1) {
            cout << num1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << num2 << ", ";
            continue;
        }
        nTerm = num1 + num2;
        num1 = num2;
        num2 = nTerm;
        
        cout << nTerm << ", ";
    }
    return 0;
}
