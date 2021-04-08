#include <iostream>
#include<string.h>
using namespace std;

class Stack
{
	public:
	    int top;
	    unsigned capacity;
	    char* array;
};

Stack* createStack(unsigned capacity)
{
	Stack* stack = new Stack();
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = new char[(stack->capacity * sizeof(char))];
	return stack;
}


void push(Stack* stack, char item)
{
	stack->array[++stack->top] = item;
}

char pop(Stack* stack)
{
	return stack->array[stack->top--];
}
void reverse(char str[])
{
	
	int n = strlen(str);
	Stack* stack = createStack(n);

	int i;
	for (i = 0; i < n; i++)
		push(stack, str[i]);

	for (i = 0; i < n; i++)
		str[i] = pop(stack);
}

int main()
{
	char str[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>str[i];
    }
  reverse(str);
	cout <<str;

	return 0;
}

