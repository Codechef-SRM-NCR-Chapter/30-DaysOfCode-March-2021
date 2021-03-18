#include <stdio.h>
#include<math.h>
int calculateLength(int n);
int main()
{
    int n;
    int remainder;
    int  sum;
    sum=0;
    int temp;
    printf("Enter the number : \n");
    scanf("%d",&n);
    temp=n;
    
    int len = calculateLength(n);
    
    while(temp>0)
    {
        remainder= temp%10;
        sum=sum+ pow(remainder,len);
        temp=temp/10;
        len=len-1;
    }
    if (sum==n)
        printf("The number %d is a disarium number",n);
    else
        printf("The number %d is not a disarium number",n);
    
    return 0; 
}
int calculateLength(int n){    
    int length = 0;    
    while(n != 0){    
        length = length + 1;    
        n = n/10;    
    }    
    return length;    
}
