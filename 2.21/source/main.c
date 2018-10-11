#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	for (a = 9; a >=1; a/=3)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("        ");
	}
	printf("*\n");
	for (a = 7; a >= 5; a--)
	{
		printf("*");
		for (b = 0; b < a; b++)
		{
			printf(" ");
		}
	}
	printf("*     ***      * *\n");
	printf("*       *     *       *   *****    *   *\n");
	printf("*       *     *       *     *     *     *\n");
	printf("*       *     *       *     *    *       *\n");
	printf("*       *     *       *     *     *     *\n");
	printf("*       *     *       *     *      *   *\n");
	for (a = 7; a >= 5; a--)
	{
		printf("*");
		for (b = 0; b < a; b++)
		{
			printf(" ");
		}
	}
	printf("*      *       * *\n");
	for (a = 9; a >= 1; a /= 3)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("        ");
	}
	printf("*\n");
	system("pause");
	return 0;
}