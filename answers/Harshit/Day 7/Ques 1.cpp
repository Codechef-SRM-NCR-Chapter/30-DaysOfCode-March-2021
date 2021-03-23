#include <iostream>
using namespace std;

int main() 
{
    int num[5]={0,1,2,3,4},index[5]={0,2,4,3,1},output[5];
    for(int i=0;i<5;i++)
    {
        output[index[i]]=num[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<output[i]<<" ";
    }
}
