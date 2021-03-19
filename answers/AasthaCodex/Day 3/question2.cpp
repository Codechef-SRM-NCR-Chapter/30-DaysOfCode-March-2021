#include<bits/stdc++.h>
using namespace std;
int main(){
	long number;
	char str[10];
	int a[10] = {0};
    int temp = 1, i = 0;
	
	cout<<"Enter a number = ";
	cin>>number;
	itoa(number,str,10);
	
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case '0':
						a[0]++;
						break;
			case '1':
						a[1]++;
						break;
			case '2':
						a[2]++;
						break;
			case '3':
						a[3]++;
						break;
			case '4':
						a[4]++;
						break;
			case '5':
						a[5]++;
						break;
			case '6':
						a[6]++;
						break;
			case '7':
						a[7]++;
						break;
			case '8':
						a[8]++;
						break;
			case '9':
						a[9]++;
						break;
		}
		i++;
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]>1)
		{
			temp=0;
			break;
		}
	}
	
	if(temp)
		cout<<"Unique Number"<<endl;
	else
		cout<<"Not a Unique Number"<<endl;
	
	return 0;
}
