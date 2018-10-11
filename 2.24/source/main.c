#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, a;
	printf("块计");
	scanf_s("%d", &num);
	a = num % 2;
	if (a == 0)
	{
		printf("计案计\n");
	}
	else
	{
		printf("计计\n");
	}
	system("pause");
	return 0;
}