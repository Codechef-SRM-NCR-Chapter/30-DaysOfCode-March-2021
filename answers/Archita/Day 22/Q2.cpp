#include <iostream>
using namespace std;
void display(int q[],int f,int r)
{
    for(int i=f;i<r;i++)
     cout<<q[i]<<"<-";
     cout<<q[r];
}
void insert(int q[],int &f,int &r,int val)
{
    if(r==-1)
    {
        f=r=0;
        q[r]=val;
    }
    else
    {
        r++;
        q[r]=val;
    }
}

void reverse(int q[],int k,int &f,int &r)
{
    int i,j,l;
    j=r-k+1;
    for(i=f;i<j;i++)
    {
	l= q[i];
	q[i] = q[j];
	q[j] = l;
        j--;
    }
}

int main()
{
    int q[20],f=-1,r=-1,n;
    cout<<"Enter the no. of elements in queue\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        insert(q,f,r,val);
    }
    int k;
    cout<<"enter the position from where reverse has to be done";
    cin>>k;
    reverse(q,k,f,r);
    cout<<endl;
    display(q,f,r);
    return 0;
}
    