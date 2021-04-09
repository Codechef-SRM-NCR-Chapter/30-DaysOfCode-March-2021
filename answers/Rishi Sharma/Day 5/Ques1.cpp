#include<iostream>

using namespace std;

int main()
{
    int first = 1, second = 1, third = 0;
    cout<<third<<", "<<first<<", "<<second<<", ";
    while(third<=50)
    {
        third = first+second;
        cout<<third<<", ";
        first = second;
        second = third;
    }
    return 0;
}