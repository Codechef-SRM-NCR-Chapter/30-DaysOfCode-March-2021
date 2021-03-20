#include<stdio.h>
int main(){
    int n;
    
    printf("enter the value of number of terms you want");
    scanf("%d", &n);
    for(int i=1; i<(n+1); i++){
        printf("%d\n", i*((i*i)+2));
    }
    return 0;
}
