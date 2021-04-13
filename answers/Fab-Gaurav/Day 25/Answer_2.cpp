#include<bits/stdc++.h>
using namespace std;

void cntMoves(int posX, int posY, int X, int Y)
{
    int move;
	if(posX<X && posY<Y)
	{
		move++;
		cntMoves(posX+1, posY+1, X, Y);
	}
	else if(posX<X && posY==Y)
	{
		move++;
		cntMoves(posX+1, posY, X, Y);
	}
	else
	{
		while(move == 0)
		{
		    cout<<"Can't reach, Enter other values for X and Y"<<endl;
		    break;
		}
		return;
	}
	cout<<"The minumum number of moves taken are : "<<move<<endl;
	return;
}

int main()
{
    int T, X, Y;
    cout<<"Enter the test cases : ";
    cin>>T;
    while(T--)
    {
        cout<<"Enter the value of X and Y : ";
        cin>>X>>Y;
        cntMoves(0, 0, X, Y);
        cout<<endl;
    }
    return 0;
}
