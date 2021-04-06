#include<iostream>

using namespace std;

int main()
{
    int i=1;
    while(i<=10)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7){
            cout<<"# ";
        }
        else{
            cout<<"* ";
        }
        if (i == 1 || i == 3 || i == 6)
        {
            cout<<"\n";
        }
        i++;
    }

    return 0;
}