#include<bits/stdc++.h>
using namespace std;
int main(){
    int candies[5]={2,3,5,1,3};
    int extra =3;
    int max =0;
    
       for(int i=0;i<5;i++){
           if(candies[i]>max)
            max=candies[i];
       }
       
        for(int j=0;j<5;j++){
            if((candies[j]+extra)>=max){
               cout<<"TRUE,";
            }
            else{
                cout<<"FALSE,";
            }
        }
   return 0;    
}
