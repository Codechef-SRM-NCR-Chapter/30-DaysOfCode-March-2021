#include<bits/stdc++.h>
using namespace std;

int checkprime(int m){
    int a,flag;
    flag=0;
    a=1;
    while(a<=m){
      if(m%a==0){
          flag++;
      }
      a++;
      }
      if(flag==2){
        return 1;
    }
    else return 0;
}

int main(){
    int n=4,count,temp;
    count=1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        temp=checkprime(count);
        if(temp==1){
            cout<<"# ";
        }
        else cout<<"* ";
        count++;
      }
      cout<<endl;
    }
    return 0;	
}
