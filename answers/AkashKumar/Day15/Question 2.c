#include <stdio.h>
int numberOfPaths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
}
int main()
{
    int m, n;
    printf("Enter m and n :  ");
    scanf("%d%d",&m,&n);
    printf("%d",numberOfPaths(m, n));
    return 0;
}
