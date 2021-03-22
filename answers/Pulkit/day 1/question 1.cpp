include <iostream>

using namespace std;

int main() 
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<((i*i*i)+(2*i))<<endl;
    }
    return 0;
}
