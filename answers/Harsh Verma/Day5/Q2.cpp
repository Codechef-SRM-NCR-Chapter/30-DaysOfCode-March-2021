#include <iostream>
using namespace std;

bool isprime(int a)
{ int factors=0;
    for(int i=1;i<a;i++)
        {if(a%i==0)
         factors++;
         }
if (factors==1)
return 1;
else 
return 0;
}

int main() {
int linebreak=1,n=1;
while(linebreak<=4){
    for(int i=1;i<=linebreak;i++){
        if(n==1)
        cout<<"*";
            else if (isprime(n))
            cout<<"# ";
                else
                cout<<"* ";
        n++;
        }
    cout<<endl;
    linebreak++;
    }
return 0;
}
