#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int i,j;
	int a[1000]; 
	int isUnique = 1;
	printf("Enter size of the number : ");
    scanf("%d", &n);
    printf("Enter digits of the number : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			
			if(i != j){
				if(a[i] == a[j]){
					
					isUnique = 0; 
				}
			}
		}
	}
	
	
	if(isUnique == 1){
		printf("Number is Unique \n");
	}
	else
		printf("Number is NOT unique. \n");
	
	return 0;
}
