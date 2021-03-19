#include <iostream>
using namespace std;

int main() {
    
int n,c=0;
cin>>n;
int terms=0, a=n,b=n;
  while(a>0)
  {terms++;
   a=a/10;}
  
int d[terms];
for(int i=0;i<terms;i++)
    {d[(terms-1)-i]=b%10;
    b=b/10;;
    }
  
for(int j=0,k;j<terms;j++){
    for(k=0;k<terms;k++){
        if (d[j]==d[k])
         c++;
        }
}
  
if(c==terms)
cout<<n<<" is a unique number";
else cout<<n<<"is not a unique number";
return 0;
}
