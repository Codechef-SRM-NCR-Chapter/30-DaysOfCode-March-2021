#include <stdio.h>
void reverse(char* begin, char* end)
{
	char temp;
	while (begin < end) {
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}
void reverseWords(char* s)
{
	char* word_begin = s;
	char* temp = s;

	while (*temp) {
		temp++;
		if (*temp == '\0') {
			reverse(word_begin, temp - 1);
		}
		else if (*temp == ' ') {
			reverse(word_begin, temp - 1);
			word_begin = temp + 1;
		}
	}
	reverse(s, temp - 1);
}
int main()
{
    char s[] = "This is a String";
    char* temp = s;
    reverseWords(s);
    printf("%s", s);
    return 0;
}
