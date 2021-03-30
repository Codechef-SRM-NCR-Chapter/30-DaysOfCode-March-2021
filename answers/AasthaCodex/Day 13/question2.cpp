#include<bits/stdc++.h>
using namespace std;
int ArrayPalindrome(int array[], int starting_point, int ending_point);
int main(){

    int array[100];
    int no_of_elements;
    cout<<"Enter number of elements in the array = ";
    cin>>no_of_elements;
    cout<<"Enter array elements = ";
    for(int i = 0; i < no_of_elements; i++){
        cin>>array[i];
    }
    int check = ArrayPalindrome(array, 0, no_of_elements - 1);
    if(check == 1){
        cout<<"PALINDROME!";
    }
    else{
        cout<<"NOT A PALINDROME!";
    }
    return 0;
}
int ArrayPalindrome(int array[], int starting_point, int ending_point){
    if(starting_point >= ending_point){
        return 1;
    }
    if(array[starting_point] == array[ending_point]){
        return ArrayPalindrome(array, starting_point+1, ending_point-1);
    }
    else{
        return 0;
    }
}
