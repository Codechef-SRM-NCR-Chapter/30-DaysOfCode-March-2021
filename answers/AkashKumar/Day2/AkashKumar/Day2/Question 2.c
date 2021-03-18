#include <stdio.h>
#include<math.h>
int reverse_num(int num)
{
    int rev =0 ;
    while(num!=0)
    {
        rev = rev * 10 + (num%10);
        num = num / 10 ;
    }
    return rev;
}
int is_prime(int num)
{
    int i;
    for(i = 2 ; i< num/2 + 1 ; i++)
    {
        if(num % i == 0)
        {
                return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    int reverse;
    int x;
    int y;
    printf("Enter the number: \n");
    scanf("%d",&num);
    reverse= reverse_num(num);
    x= is_prime(num);
    y= is_prime(reverse);

    if (x==1&&y==1)
    {
        printf("The number %d is a emirp number",num);
    
    }
    else 
    {
        printf("The number %d is not a emirp number",num);
    }
    return 0;
}
    
