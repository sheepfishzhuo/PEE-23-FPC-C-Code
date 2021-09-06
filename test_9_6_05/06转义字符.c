#include<stdio.h>
int main()
{
	printf("%c", '\'');
	printf("%s", "\"");
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}