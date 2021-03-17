#include <iostream>

int main() {
int n=4;
while(n--)
    {
    for(int i=0;i<=4;i++)
        {
            if (i<=n)
            std::cout<<"  ";
            else 
            std::cout<<"* ";
        }
    std::cout<<std::endl;
    }
return 0;
}
