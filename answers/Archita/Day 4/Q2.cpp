#include <iostream>
using namespace std;

int main() 
{
    int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i>=j)
            {
                k++;
                cout<<k<<" ";
            }
         
        }
        cout<<"\n";
    }
	return 0;
}
