#include<stdio.h>

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
int main()
{    
    int n;
    printf("Enter no of elements : ");
    scanf("%d", &n);
	int arr[n],temp,sum=0;
	for(int i=0;i<n;i++)
	{
	    printf("Eneter element no. %d :  ", i);
		scanf("%d", &arr[i]);
	}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}

}
for(int i=0;i<n;i=i+2)
{
	sum=sum+min(arr[i],arr[i+1]);

}
printf("sum is %d",sum);
}
