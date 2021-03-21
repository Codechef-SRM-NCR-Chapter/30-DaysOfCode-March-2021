#include <iostream>
using namespace std; 
int main() {
    int n,n1=0,n2=1,nt;
    cout << "Enter the no. of terms";
    cin >> n;
    for (int i=1; i< n; i++){
        cout << n1 << endl;
        nt = n1 + n2;
        n1 = n2;
        n2 = nt;
    }
    return 0;
}
