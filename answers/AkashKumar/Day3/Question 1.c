#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i=0,j;
    int sum=0;
    int series=0;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=i;j<=i;j++)
        {
            sum=sum*10+j;
            printf("the number is %d \n",sum);
        }
        series=series+sum;
    }
    printf("%d",series);
    return 0;
}
