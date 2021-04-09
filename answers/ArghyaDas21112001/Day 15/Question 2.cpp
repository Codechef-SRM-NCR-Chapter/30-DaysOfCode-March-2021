#include <iostream>
using namespace std;
int num_of_possible_paths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return num_of_possible_paths(m - 1, n) + num_of_possible_paths(m, n - 1);
}
  
int main()
{
    int m,n;
    cout<<"Enter the dimension of the matrix M X N: "<<endl;
    cout<<"M --> ";
    cin>>m;
    cout<<"N --> ";
    cin>>n;
    cout<<"The total number of paths: ";
    cout << num_of_possible_paths(m, n);
    return 0;
}
