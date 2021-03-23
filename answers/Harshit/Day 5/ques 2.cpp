#include <bits/stdc++.h>  
using namespace std;  
int main()  
{  int i=1,flag,j;
  for(int k=1;k<=4;k++){
   for(int p=0;p<k;p++){
    
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        if(i==1)
        cout<<" * ";
        else if (flag == 1)
            cout << " # ";
        else
         cout<<" * ";
         
          i++;
       }

       cout<<endl;
     }
  return 0;
}
