#include<bits/stdc++.h>
using namespace std;
int countMe(bool array[], int start, int end);
int main(){

    bool array[50];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    cout<<countMe(array, 0, n-1); 
    return 0;
}
int countMe(bool array[], int start, int end){ 
  if (end >= start) 
  { 
    int between = start + (end - start)/2; 
    if ( (between == end || array[between+1] == 0) and (array[between] == 1)) {
      return between+1; 
    }
    if (array[between] == 1) 
      return countMe(array, (between + 1), end); 

    return countMe(array, start, (between -1)); 
  } 
  return 0; 
} 
