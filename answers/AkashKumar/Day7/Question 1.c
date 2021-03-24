#include <stdio.h>
void array();
int main(){
    int n;
    printf("Enter no of elements ");
    scanf("%d", &n);
    int nums[n];
    int index[n];
    int target[n];
    for (int i = 0; i < n; i++){
        printf("enter %d th in nums array: ", i+1);
        scanf("%d", &nums[i]);
    }
    printf("\n");
    for (int j = 0; j < n; j++){
        printf("enter %dth element in index array: ", j+1);
        scanf("%d", &index[j]);
    }
    printf("\n Target Array is  [");
    for (int k = 0; k < n; k++){
       array(index[k], nums[k], target,n);
    }
    for (int m = 0; m < n; m++){
        printf("%d ", target[m]);
    }
    printf("]\n");
    return 0;
    }

void array(int position,int element, int * a,int n){
	for(int i = n; i > position ; i--)
    {
		a[i] = a[i-1];		
	}
	a[position] = element;
}
