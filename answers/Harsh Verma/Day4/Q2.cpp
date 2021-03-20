#include <iostream>
using namespace std;

int main() {
int n=1, linebreak=1;
while(linebreak<=4){
    for(int i=1;i<=linebreak;i++){
    cout<<n<<' '; 
    n++;
    }
    cout<<endl;
    linebreak++;
    }
   return 0;
}
