#include <stdio.h>

int size;

int main()
{
    int sum = 0, s, temp = 0; 

    printf("How many elements are in the array?: ");
    scanf("%d", &size);

    int nums[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    for(int i = 1; i < size; i++)
	{
		
		for(int j = 0; j <= i; j++)
		{
			temp=0;
			s=j;
			while(s<i && s>=j)
			{
				temp += nums[s];
				s++;
			}
			if(temp>=sum)
			{
			sum=temp;
			}
		}
	}
    
    printf("The largest sum is %d\n", sum);
}

