#include<bits/stdc++.h>
using namespace std;

bool Prime(int n) 
{
    bool Prime = true;

    if (n == 0 || n == 1) 
	{
        Prime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) 
		{
            if (n % i == 0) 
			{
                Prime = false;
                break;
            }
        }
    }
    return Prime;
}

int main()
{
   int n = 4, temp, val = 1;
   bool flag;
   for(int i=1;i<=n;i++)
   {
		for(int j=1;j<=i;j++)
		{
			temp = Prime(val);
			if(temp == 1)
			{
            cout<<"# ";
         }
			else 
			{
         cout<<"* ";
            }
		val = val + 1;
	}
	cout<<endl;
	}
   return 0;
}
