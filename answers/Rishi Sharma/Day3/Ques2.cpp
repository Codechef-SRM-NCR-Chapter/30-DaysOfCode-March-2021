#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector <int> a;
    cin>>n;
    while(n>0){
        a.push_back(n%10);
        n /= 10;
    }
    sort(a.begin(), a.end());
    vector<int>::iterator upper, lower;
    bool yes;
    for (int i=0; i<a.size(); i++)
    {
    upper = upper_bound(a.begin(), a.end(), a[i]);
    lower = lower_bound(a.begin(), a.end(), a[i]);
    int a1 = upper-a.begin();
    int b1 = lower-a.begin();
        if (a1 - b1 == 1)
        {
            yes = true;
        }
        else{
            yes = false;
            break;
        }
    }
    if (yes == true){
        cout<<"Unique";
    }
    else
        cout<<"Not!";

    return 0;
}