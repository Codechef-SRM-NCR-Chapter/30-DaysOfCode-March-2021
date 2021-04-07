#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
    int top=-1;
    char stack1[20],stack2[20];
    char ans;
    int choice;
    do
    {
        cout<<"1.push\n2.reverse\n3.display\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter string\n";
            cin>>stack1;
            cout<<stack1;
            break;
            case 2:
            top=strlen(stack1);
            int n;
            n=top;
            for(int i=0;i<top;i++)
            {
                stack2[n]=stack1[i];
                n--;
            }
            strcpy(stack1,stack2);
            cout<<"String reversed";
            break;
            case 3:
            cout<<stack1;
            break;
        }
        cout<<"\ncontinue?\n";
        cin>>ans;
    }while(ans=='y');
    
    return 0;
}
