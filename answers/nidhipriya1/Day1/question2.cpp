#include <iostream>
using namespace std;
int main()
{
int  i, j;
    for (int i = 1; i <= 4; i++)
	 {
        for (int k = 4 - i; k > 0; k--)
		 {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
		{
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
