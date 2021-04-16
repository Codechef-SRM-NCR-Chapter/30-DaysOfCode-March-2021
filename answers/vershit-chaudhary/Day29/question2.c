#include<stdio.h>
int main(){
    int cases;
    printf("enter the number of test cases: ");
    scanf("%d",&cases);
    int a[cases];
    printf("enter the numbers: ");
    for(int i=0;i<cases;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<cases;i++){
        if(a[i]==4040 || a[i]==4041 || a[i]==4042){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
