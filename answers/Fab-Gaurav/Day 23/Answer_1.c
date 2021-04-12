#include<stdio.h>
#include<string.h>

void rev_str(char *str);

void rev_str(char *str )	
{
	if(*str == '\0')
	    return;
	rev_str(str+1);
	putchar(*str );
}

main( )
{
	char str[100];
	printf("Enter the string : ");
	gets(str);
	printf("The reversed string is : ");
	rev_str(str);
}
