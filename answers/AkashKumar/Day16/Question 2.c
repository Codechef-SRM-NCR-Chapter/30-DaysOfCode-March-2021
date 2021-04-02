#include <stdio.h>
int search(int a[], int size, int key)
{
    int pos =0;
    while((pos<size)&&(a[pos]!=key))
    pos++;
    if(pos<size)
    return pos;
    return -1;
}
int main()
{
    int size, i;
    printf("Enter size of array  ");
    scanf("%d",&size);
    
    int a[size];
    for(i=0;i<size;i++)
    {
    printf("Enter element no %d  ",i+1);
    scanf("%d",&a[i]);
    }
    int z;
    int key = 1;
    z=search(a,size,key);
    if(z==-1)
    {
    printf("No 1");
    }
    else
    {
        printf("%d",z);
    }
    return 0;
}
