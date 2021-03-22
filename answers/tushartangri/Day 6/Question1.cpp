#include <iostream>
using namespace std;
int main() {
   int n;
   cout << " Enter n" << endl;
   cin >> n;
   int candies[100];
   cout <<" Enter candies" << endl;
   for(int i= 0; i< n; i++){
       cin >> candies[i];
   }
   int extraCandies, max=0;
   cout << "Enter extracandies" << endl;
   cin >> extraCandies;
   for(int i=0; i< n; i++){
       if(max < candies[i])
       max = candies[i];
   }
   bool output[100];
   for(int i = 0; i< n; i++){
       if(candies[i] + extraCandies >= max){
       output[i] = true;
       cout << "True";}
       else{
       output[i]=false;
       cout << "False";
       }
   }

    return 0;
}
