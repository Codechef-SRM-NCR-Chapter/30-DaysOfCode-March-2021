#include<stdio.h>
int f = -1,r = -1;
int q[50];
void enqueue(int data,int l)
{
	if(r==l-1){
		printf("Queue is full");
	}
	else if((f==-1)&&(r==-1)){
		f = r = 0;
		q[r] = data;
	}
	else
	{
		r++;
		q[r] = data;	
	}
}
void print()
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("\n%d",q[i]);
	}
}
void reverse(int K)
{
	int i,j,t;
	for(i=f,j=r-K+1;i<j;i++,j--){
		t = q[i];
		q[i] = q[j];
		q[j] = t;
	}
}
void main()
{
	int n,i=0,t,K;
	printf("Enter the size of Queue");
	scanf("%d",&n);
	printf("Enter the Value of K  ");
	scanf("%d",&K);
	printf("\nEnter the data for Queue");
	while(i<n){
		scanf("%d",&t);
		enqueue(t,n);
		i++;
	}
	printf("\nQueue which you have entered:-");
	print();
	reverse(K);
	printf("\nQueue after reversing:-");
	print();
	
}
