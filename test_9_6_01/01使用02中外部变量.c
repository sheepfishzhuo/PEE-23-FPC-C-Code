#include<stdio.h>
int main()
{
	extern int year, month, day, hour, minute, second;
	printf("%d��%d��%d��", year, month, day);
	printf("%dʱ%d��%d��", hour, minute, second);
	printf("\n");
	return 0;
}