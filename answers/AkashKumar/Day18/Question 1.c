#include<stdio.h>
#include<math.h>
int perfectSquares(float l, float r)
{
    int count = 0;
    for (int i = l; i <= r; i++) {

        if (sqrt(i) == (int)sqrt(i))
            count++;
            
    }
    return count;
}

int main()
{
    int l = 0;
    int r;
    printf("Enter N  ");
    scanf("%d",&r);
    printf("Number of perfect squares is %d",perfectSquares(l+1, r-1));
    return 0;
}
