#include<stdio.h>
int main()
{
	enum sex
	{
		// man = 2021,
		man,
		women,
		baomi
	};
	enum sex s = man;
	printf("%d\n", s);
	printf("%d\n", man);
	printf("%d\n", women);
	printf("%d\n", baomi);
	return 0;
}