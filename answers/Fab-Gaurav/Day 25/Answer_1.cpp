#include<bits/stdc++.h>
using namespace std;

void cntMoves()
{
    int X, Y, moves;
    X=Y=0;
    cout<<"Number of Moves: ";
    cin>>moves;
    for(int i=0; i<=moves; i++)
    {
        if(moves%2==0)
        {
            if(i!=1 || i%2==0){
                Y+=1;
            }
        }
        
        else
        {
            if(i==1 || i%2==1){
                Y+=i;
            }
        }
    }
    cout<<"Sum of all abs(X) & abs(Y) = "<<Y*2<<endl;
    return;
}

int main()
{
    int T;
    cout<<"Enter the test cases : ";
    cin>>T;
    while(T--)
        cntMoves();
    return 0;
}
