#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2,a;
	printf("块材计:");
	scanf_s("%d", &num1);
	printf("块材计:");
	scanf_s("%d", &num2);
	a = num1%num2;
	if (a == 0)
	{
		printf("%d琌%d计", num1, num2);
	}
	else
	{
		printf("%dぃ琌%d计", num1, num2);
	}
	system("pause");
	return 0;
}