#include<stdio.h>
int main()
{
	extern int year, month, day, hour, minute, second;
	printf("%d年%d月%d日", year, month, day);
	printf("%d时%d分%d秒", hour, minute, second);
	printf("\n");
	return 0;
}