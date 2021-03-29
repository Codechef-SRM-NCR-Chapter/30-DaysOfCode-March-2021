#include<iostream>   
using namespace std;  
int countSub(char str[]) 
{ 
int flag,count;
flag=count=0; 
for (int i=0;str[i]!='\0';i++) 
{ 
        if (str[i]=='1') 
        {      count++;
            for(int j=i+1;str[j]!='\0';j++) 
            if (str[j] == '1') 
               flag++; 
        } 
} 
return flag+count; 
} 
int main() 
{ 
char str[100];
int n;
cout<<"\nEnter test cases\n";
cin>>n;
for(int k=0;k<n;k++)
{
	cout<<"Enter binary string\n";
     cin>>str; 
     cout << countSub(str)<<endl; 
}
return 0; 
} 
