#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[20];
    int n,ctr=0;
    cout<<"Enter string\n";
    cin>>str;
    cout<<"Enter number of characters\n";
    cin>>n;
    int len;
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a')
        ctr++;
    }
    int q;
    q=n/len;
	int r;
	r=n%len;
	ctr=q*ctr;
	for (int i = 0; i < r; i++)
	{
		if(str[i]=='a')
        ctr++;
	}
	cout<<ctr;
    return 0;
}