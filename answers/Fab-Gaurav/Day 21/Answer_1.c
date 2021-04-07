#include<stdio.h>
#include<string.h>

void org_str(char *str);
void rev_str(char *str);

void org_str(char *str )
{
	if(*str == '\0')
	    return;
	putchar(*str );
	org_str(str+1);
}

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
	printf("Your entered string is : ");
	org_str( str );
	printf("\n");
	printf("The reversed string is : ");
	rev_str(str);
}
