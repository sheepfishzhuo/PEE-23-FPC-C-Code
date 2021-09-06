#include<stdio.h>
int main()
{
	int num1,num2,sum;
	printf("press your first number:\n");
	scanf_s("%d", &num1);
	printf("your first number is %d\n", num1);
	printf("press your second number:\n");
	scanf_s("%d", &num2);
	printf("your second number is %d\n", num2);
	sum = num1 + num2;
	printf("sum is %d\n", sum);
	return 0;
}