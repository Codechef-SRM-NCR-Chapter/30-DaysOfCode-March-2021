#include <iostream>
using namespace std;
void removeadjacentDuplicates(char* A)
{
    if (A[0]=='\0')
        return;
    if (A[0]==A[1])
    {
        int n=0; 
        while (A[n]!='\0') 
        {
            A[n] = A[n + 1];
            n++;
        }
        removeadjacentDuplicates(A);
    } 
    removeadjacentDuplicates(A + 1);
}
int main()
{
    char A1[1000];
    cout<<"Enter the string: ";
    cin>>A1;
    cout<<"Before removing Duplicates: "<<A1<<endl;
    removeadjacentDuplicates(A1);
    cout<<"After removing Duplicates: "<<A1<<endl;
    return 0;
}
