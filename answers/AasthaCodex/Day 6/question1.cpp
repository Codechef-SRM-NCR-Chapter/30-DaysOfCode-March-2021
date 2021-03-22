#include <bits/stdc++.h>
using namespace std;

vector <bool> kidsCandies(vector <int> &candies , int eCandies)
{
    int n = candies.size() , mCandies = 0;
    for(int i = 0 ; i < n ; i++)
        if(candies[i] > mCandies)
            mCandies = candies[i];


    vector <bool> result(n);
    for(int i = 0 ; i < n ; i++)
        result[i] = (candies[i] + eCandies >= mCandies);

    return result;
}


int main()
{
    vector <int> candies = {2, 3, 5, 1, 3};
    int eCandies = 3;
    for(bool x : kidsCandies(candies , eCandies))
        cout << (x ? "true" : "false") << " ";
    cout <<endl;
    return 0;
}
