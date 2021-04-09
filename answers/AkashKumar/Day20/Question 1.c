#include <stdio.h>
#define SIZE 100
 
 
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
 
//Functions to push data
void push_stack (int data)
{
  if (top1 < top2 - 1)
  {
    ar[++top1] = data;
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}

 
//Functions to pop data
void pop_stack ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack \n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}

//Functions to Print Stack 
void print_stack ()
{
  int i;

for (i =0; i<=top1; ++i)
  {
    printf ("%d", ar[i]);
  }
  printf ("\n");
}
int no_of_digit(int n)
{     
    int count=0;
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }
    return count;
}

int main()
{
    int Testcase=1,z;
    // printf("Enter no of Testcase ");
    // scanf("%d",&Testcase);
    for(z=0;z<Testcase;z++)
    {
    int n,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int count;
    count=no_of_digit(n);
    
    int arr[100];
    int j, r;
    for (j = count - 1; j > -1; j--) {
        r = n % 10;
        arr[j] = r;
        n = n / 10;
    }
  
    push_stack(arr[0]);
    for(i=1;i<count;i++)
    {
        push_stack(arr[i]);
        if(arr[i]==arr[i-1]){
            pop_stack(arr[i]);
        }
    }
    print_stack();
    
    }
}
