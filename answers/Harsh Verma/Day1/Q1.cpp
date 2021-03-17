#include <iostream>
#include <math.h>
int main() {
	int n;
    std::cout<<"Enter the number of terms of the series";
	std::cin>>n;
	std::cout<<std::endl;
    for(int i=1;i<=n;i++)
    std::cout<<pow(i,3) + i*2<<", ";
    
	return 0;
}
